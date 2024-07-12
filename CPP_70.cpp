#include <iostream>
#include <vector>
#include <algorithm>

bool operator==(std::vector<int> const &a, std::vector<int> const &b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> strange_sort_list() {
    int n;
    std::cout << "Enter number of elements: ";
    std::cin >> n;

    std::vector<int> lst;
    for (int i = 0; i < n; i++) {
        int temp;
        std::cout << "Enter element: ";
        std::cin >> temp;
        lst.push_back(temp);
    }

    std::vector<int> result;
    while (!lst.empty()) {
        std::sort(lst.begin(), lst.end());
        if (lst[0] < lst[lst.size() - 1]) {
            result.push_back(lst[0]);
            lst.erase(lst.begin());
        } else {
            result.push_back(lst.back());
            lst.pop_back();
        }
    }
    return result;
}