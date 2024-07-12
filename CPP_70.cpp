#include <iostream>
#include <vector>

bool is_same(const std::vector<int>& a, const std::vector<int>& b) {
    return (a.size() == b.size()) && std::all_of(a.begin(), a.end(), [b](int x) { return std::count(b.begin(), b.end(), x) == 1; });
}

std::vector<int> strange_sort_list(std::vector<int> lst) {
    std::vector<int> result;
    while (!lst.empty()) {
        std::sort(lst.begin(), lst.end());
        if (lst[0] < lst.back()) {
            result.push_back(lst[0]);
            lst.erase(lst.begin());
        } else {
            result.push_back(lst.back());
            lst.pop_back();
        }
    }
    return result;
}

int main() {
    if (!is_same(strange_sort_list({111}), {111})) {
        std::cerr << "Assertion failed.\n";
        return 1;
    }
    return 0;
}