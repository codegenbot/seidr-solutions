```cpp
#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> strange_sort_vector(std::vector<int> lst) {
    std::vector<int> result;
    if (lst.empty()) return result;

    while (!lst.empty()) {
        int minVal = *min_element(lst.begin(), lst.end());
        result.push_back(minVal);
        auto newEnd = std::remove(lst.begin(), lst.end(), minVal);
        lst.erase(newEnd, lst.end());

        if (!lst.empty()) {
            int maxVal = *max_element(lst.begin(), lst.end());
            result.push_back(maxVal);
            newEnd = std::remove(lst.begin(), lst.end(), maxVal);
            lst.erase(newEnd, lst.end());
        }
    }

    return result;
}

int main() {
    std::vector<int> testVec = {111111};
    assert(issame(testVec, strange_sort_vector(testVec)));
    return 0;
}