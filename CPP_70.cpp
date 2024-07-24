#include <iostream>
#include <vector>
#include <algorithm>

bool isSame(int a, int b) {
    return a == b;
}

std::vector<int> strangeSortVector(std::vector<int> lst) {
    std::vector<int> result;
    while (!lst.empty()) {
        int minVal = *min_element(lst.begin(), lst.end());
        int maxVal = *max_element(lst.begin(), lst.end());
        if (isSame(minVal, maxVal)) {
            result.push_back(minVal);
            lst.erase(std::remove(lst.begin(), lst.end(), minVal), lst.end());
        } else {
            result.push_back(minVal);
            result.push_back(maxVal);
            lst.erase(std::remove(lst.begin(), lst.end(), minVal), lst.end());
            lst.erase(std::remove(lst.begin(), lst.end(), maxVal), lst.end());
        }
    }
    return result;
}

int main() {
    assert(isSame(strangeSortVector({111}), std::vector<int>({111})));
    return 0;
}