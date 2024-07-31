#include <iostream>
#include <vector>
#include <cassert>

bool isMonotonic(std::vector<int> l) {
    if (l.empty()) {
        return true;
    }
    bool increasing = true;
    bool decreasing = true;
    for (int i = 1; i < l.size(); i++) {
        if (l[i] > l[i - 1]) {
            decreasing = false;
        } else if (l[i] < l[i - 1]) {
            increasing = false;
        }
    }
    return increasing || decreasing;
}

int main() {
    int n;
    std::vector<int> nums;

    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        int num;
        std::cin >> num;
        nums.push_back(num);
    }

    bool result = isMonotonic(nums);
    std::cout << std::boolalpha << result << std::endl;

    return 0;
}