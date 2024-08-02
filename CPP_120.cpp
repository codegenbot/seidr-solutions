#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> maximum(std::vector<int> arr, int k) {
    std::sort(arr.rbegin(), arr.rend());
    return std::vector<int>(arr.begin(), arr.begin() + k);
}

int main() {
    std::vector<int> arr;
    int k;

    int num;
    while (std::cin >> num) {
        arr.push_back(num);
        if (std::cin.peek() == '\n') {
            break;
        }
    }

    std::cin >> k;

    std::vector<int> result = maximum(arr, k);

    for (int elem : result) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}