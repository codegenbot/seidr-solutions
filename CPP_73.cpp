#include <vector>
#include <iostream>

int smallest_change(const std::vector<int>& arr) {
    int n = arr.size();
    int changes = 0;
    for (int i = 0; i < n / 2; ++i) {
        if (arr[i] != arr[n - i - 1]) {
            ++changes;
        }
    }
    return changes;
}

int main() {
    std::vector<int> arr;
    int n, element;
    std::cin >> n;
    for(int i = 0; i < n; ++i) {
        std::cin >> element;
        arr.push_back(element);
    }
    std::cout << smallest_change(arr) << std::endl;
    return 0;
}