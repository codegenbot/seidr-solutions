#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

int main() {
    int n;
    std::cout << "Enter number of elements: ";
    std::cin >> n;

    std::vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> arr[i];
    }

    std::vector<std::string> result = by_length(arr);

    std::vector<std::string> expected_output;
    // your expected output
    if (issame(expected_output, result)) {
        std::cout << "Output is as expected.\n";
    } else {
        std::cout << "Output does not match the expected output.\n";
    }

    return 0;
}