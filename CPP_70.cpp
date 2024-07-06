#include <algorithm>
#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a) {
    if (a.empty()) return true;
    for (int i = 1; i < a.size(); ++i) {
        if (a[i] != a[0]) return false;
    }
    return true;
}

std::vector<int> strange_sort_vector(std::vector<int> lst) {
    std::vector<int> result;
    if (lst.empty()) return result;

    while (!lst.empty()) {
        int minVal = *std::min_element(lst.begin(), lst.end());
        result.push_back(minVal);
        lst.erase(std::remove(lst.begin(), lst.end(), minVal), lst.end());

        if (!lst.empty()) {
            int maxVal = *std::max_element(lst.begin(), lst.end());
            result.push_back(maxVal);
            lst.erase(std::remove(lst.begin(), lst.end(), maxVal), lst.end());
        }
    }

    return result;
}

int main() {
    std::vector<int> testVec = {111111};
    assert(issame(testVec) && strange_sort_vector(testVec) == testVec);
    return 0;
}