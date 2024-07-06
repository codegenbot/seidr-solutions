```cpp
#include <algorithm>
#include <vector>
#include <limits>

std::vector<int> strange_sort_vector(std::vector<int> lst) {
    std::vector<int> result;
    if (lst.empty()) return result;

    while (!lst.empty()) {
        int minVal = *min_element(lst.begin(), lst.end());
        int maxVal = *max_element(lst.begin(), lst.end());
        result.push_back(minVal);
        result.push_back(maxVal);
        std::vector<int> temp;
        for (int i : lst) {
            if (i != minVal && i != maxVal)
                temp.push_back(i);
        }
        lst = temp;
    }

    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}