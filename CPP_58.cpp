```cpp
#include <vector>
#include <set>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<std::vector<int>> common(std::vector<int> l1, std::vector<int> l2) {
    std::set<int> s1(l1.begin(), l1.end());
    std::set<int> s2(l2.begin(), l2.end());

    std::set<int> intersection(s1.begin(), s1.end());
    std::set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(),
        inserter(intersection, intersection.begin()));

    std::vector<std::vector<int>> result;
    for (int i : intersection) {
        if (std::count(l1.begin(), l1.end(), i) && std::count(l2.begin(), l2.end(), i)) {
            std::vector<int> temp = {i};
            result.push_back(temp);
        }
    }
    return result;
}