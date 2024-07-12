#include <iostream>
#include <vector>
#include <algorithm>

int sort_list(int n) {
    std::vector<int> lst = {n};
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
    return result.size();
}

int main() {
    assert(sort_list(111111) == 1);
    return 0;
}