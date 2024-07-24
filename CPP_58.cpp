```cpp
#include <vector>
#include <set>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<std::vector<int>> common(std::vector<std::vector<int>>& list1, std::vector<std::vector<int>>& list2) {
    std::vector<std::vector<int>> result;

    for (const auto& vec1 : list1) {
        for (const auto& vec2 : list2) {
            if (issame(vec1, vec2)) {
                result.push_back(vec1);
                break;
            }
        }
    }

    return result;
}