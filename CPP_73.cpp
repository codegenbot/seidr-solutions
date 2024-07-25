#include <iostream>
#include <vector>
#include <cassert>

int smallest_change(std::vector<int> arr) {
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
    std::vector<int> numbers;
    int num;
    while (std::cin >> num) {
        numbers.push_back(num);
    }
    int result = smallest_change(numbers);
    std::cout << result << std::endl;
    return 0;
}