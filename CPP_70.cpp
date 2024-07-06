```cpp
#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a) {
    return a == a;
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
    assert(strange_sort_vector(testVec) == testVec);
    return 0;
}