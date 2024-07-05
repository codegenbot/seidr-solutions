#include <vector>
#include <iostream>

int smallest_change(std::vector<int> arr) {
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
    std::vector<int> input;
    int n, element;
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        std::cin >> element;
        input.push_back(element);
    }
    std::cout << smallest_change(input) << std::endl;
    return 0;
}