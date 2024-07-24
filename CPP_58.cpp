```cpp
#include <vector>
#include <set>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<std::vector<int>> common(std::vector<std::vector<int>>& lists) {
    std::set<std::vector<int>> s1(lists.begin(), lists.end());

    std::set<std::vector<int>> intersection(s1.begin(), s1.end());
    set_intersection(s1.begin(), s1.end(), s1.begin(), s1.end(),
        inserter(intersection, intersection.begin()));

    vector<std::vector<int>> result(intersection.begin(), intersection.end());
    return result;
}