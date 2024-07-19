#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> strange_sort_list(std::vector<int> lst) {
    std::vector<int> result;
    if (lst.empty()) return result;

    sort(lst.begin(), lst.end());
    while (!lst.empty()) {
        result.push_back(*lst.begin());
        lst.erase(lst.begin());
        if (!lst.empty())
            sort(lst.begin(), lst.end());
    }
    return result;
}

int main() {
    std::vector<int> input;
    int num;
    
    // Read input from user
    while (std::cin >> num) {
        input.push_back(num);
    }

    // Call the function to process the input list
    std::vector<int> output = strange_sort_list(input);

    // Print the output
    for (int val : output) {
        std::cout << val << " ";
    }
    return 0;
}