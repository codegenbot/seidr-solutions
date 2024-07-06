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
        int maxVal = *max_element(lst.begin(), lst.end());
        for(int i = 0; i < lst.size(); i++) {
            if(lst[i] == minVal) lst.erase(lst.begin() + i);
            else if (lst[i] == maxVal) lst.erase(lst.begin() + i);
        }
        result.push_back(minVal);
        result.push_back(maxVal);
    }

    return result;
}