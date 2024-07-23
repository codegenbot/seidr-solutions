#include <iostream>
#include <vector>
#include <algorithm>

int findNextSmallest(std::vector<int> lst) {
    std::vector<int> sorted = lst;
    std::sort(sorted.begin(), sorted.end());
    if (sorted.size() < 2)
        return -1;
    for (int i = 0; i < sorted.size() - 1; i++) {
        if (sorted[i] != sorted[i + 1])
            return sorted[i + 1];
    }
    return -1;

}

int main() {
    std::vector<int> input;
    int num;

    // Read numbers from user until a non-integer is entered
    while (true) {
        std::cout << "Enter an integer: ";
        if (!(std::cin >> num)) break;
        input.push_back(num);
    }

    // Call the findNextSmallest function with the input and print the result
    int nextSmallest = findNextSmallest(input);

    if (nextSmallest == -1) {
        std::cout << "No two distinct elements in the vector.";
    } else {
        std::cout << "The next smallest number is: " << nextSmallest;
    }

}