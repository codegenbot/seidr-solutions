#include <iostream>
#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b);

// Forward declaration
std::vector<int> maximum(const std::vector<int>& arr, int k);

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    std::vector<int> arr;
    int k;

    std::cout << "Enter elements of the array: ";
    int num;
    while (std::cin >> num) {
        arr.push_back(num);
        if (std::cin.peek() == '\n') {
            break;
        }
    }

    std::cout << "Enter value of k: ";
    std::cin >> k;

    std::vector<int> result = maximum(arr, k);

    for (int elem : result) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    assert(issame(result, {243, 3, 2}));

    return 0;
}