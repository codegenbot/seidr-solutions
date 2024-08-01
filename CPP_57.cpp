#include <iostream>
#include <vector>
#include <cassert>

bool monotonic(const std::vector<int>& l) {
    bool increasing = true;
    bool decreasing = true;

    for (size_t i = 1; i < l.size(); i++) {
        if (l[i] < l[i - 1]) {
            increasing = false;
        }
        if (l[i] > l[i - 1]) {
            decreasing = false;
        }
    }

    return increasing || decreasing;
}

int main() {
    std::vector<int> input;
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        std::cin >> num;
        input.push_back(num);
    }
    
    std::cout << std::boolalpha << monotonic(input) << std::endl;

    return 0;
}