```cpp
#include <vector>
#include <iostream>

bool below_threshold(std::vector<int> l, int t);

int main() {
    std::vector<int> list;
    int threshold;

    // Read input from user
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> num;
        list.push_back(num);
    }
    std::cout << "Enter the threshold: ";
    std::cin >> threshold;

    // Call the function and print the result
    if (below_threshold(list, threshold)) {
        std::cout << "All elements are below the threshold.\n";
    } else {
        std::cout << "At least one element is not below the threshold.\n";
    }

    return 0;
}

bool below_threshold(std::vector<int> l, int t) {
    for (int i : l) {
        if (i >= t) {
            return false;
        }
    }
    return true;
}