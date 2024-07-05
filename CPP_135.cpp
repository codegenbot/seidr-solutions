#include <vector>
#include <iostream>

int can_arrange(std::vector<int> arr) {
    for (int i = arr.size() - 1; i > 0; --i) {
        if (arr[i] < arr[i - 1]) {
            return i;
        }
    }
    return -1;
}

int main() {
    std::vector<int> arr;
    int n, temp;
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        std::cin >> temp;
        arr.push_back(temp);
    }
    std::cout << can_arrange(arr) << std::endl;
    return 0;
}