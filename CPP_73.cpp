#include <iostream>
#include <vector>
#include <cassert>

int smallest_change(const std::vector<int>& arr) {
    int n = arr.size();
    int changes = 0;
    for (int i = 0; i < n / 2; ++i) {
        if (arr[i] != arr[n - 1 - i]) {
            ++changes;
        }
    }
    return changes;
}

int main() {
    std::vector<int> input;
    int num;
    while (std::cin >> num) {
        input.push_back(num);
    }
    std::cout << smallest_change(input) << std::endl;
    return 0;
}