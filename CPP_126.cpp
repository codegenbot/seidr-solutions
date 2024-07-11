#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>

bool is_sorted(const std::vector<int>& lst) {
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] <= lst[i - 1] || std::count(lst.begin(), lst.end(), lst[i]) > 1) {
            return false;
        }
    }
    return true;
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

    assert(is_sorted(input) == true);

    return 0;
}