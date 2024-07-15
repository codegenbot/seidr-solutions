#include <iostream>
#include <vector>

int smallest_change(const std::vector<int>& arr) {
    int n = arr.size();
    int changes = 0;
    for (int i = 0; i < n / 2; ++i) {
        changes += (arr[i] != arr[n - i - 1]);
    }
    return changes;
}

int main() {
    std::vector<int> arr;
    int num;
    while (std::cin >> num) {
        arr.push_back(num);
    }

    int result = smallest_change(arr);
    std::cout << result;

    return 0;
}