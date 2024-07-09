#include <iostream>
#include <vector>
#include <limits>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return (a.size() == 0 && b.size() == 0) || (a == b);
}

int pluckSame(const std::vector<int>& arr) {
    if (arr.empty()) return -1;

    int minEven = INT_MAX;
    int minIndex = -1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < minEven) {
            minEven = arr[i];
            minIndex = i;
        }
    }

    return minIndex;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    if (issame({1, 2}, arr)) {
        std::cout << "Same" << std::endl;
    } else {
        int result = pluckSame(arr);
        if (result != -1) {
            std::cout << "Index: " << result << std::endl;
        } else {
            std::cout << "No even element found" << std::endl;
        }
    }

    return 0;
}