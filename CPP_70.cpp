#include <iostream>
#include <vector>
#include <algorithm>

bool areEqualVectors(std::vector<int> const &a, std::vector<int> const &b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); ++i)
        if (a[i] != b[i])
            return false;
    return true;
}

std::vector<int> strange_sort_list(std::vector<int> lst) {
    std::vector<int> result;
    while (!lst.empty()) {
        bool isSorted = false;
        do {
            isSorted = std::stable_partition(lst.begin(), lst.end(),
                [ & ] (int x) { return x < 0; }) - lst.begin() == 0;
            if (!isSorted)
                std::sort(lst.begin(), lst.end());
        } while (!isSorted);
        if (lst.front() > 0) {
            result.push_back(lst[0]);
            lst.erase(lst.begin());
        } else {
            result.push_back(-lst.back());
            lst.pop_back();
        }
    }
    return result;
}

int main() {
    std::vector<int> lst = { -5, -3, 0, 2, 4 };
    if (areEqualVectors(lst, strange_sort_list(lst))) {
        for (auto x : lst)
            std::cout << x << " ";
        std::cout << "\n";
    }
}