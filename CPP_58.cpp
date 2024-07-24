```cpp
#include <vector>
#include <set>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<std::vector<int>> common(std::vector<std::vector<int>>& l1, std::vector<std::vector<int>>& l2) {
    set<int> s1(l1[0].begin(), l1[0].end());
    set<int> s2(l2[0].begin(), l2[0].end());

    set<int> intersection(s1.begin(), s1.end());
    set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(),
        inserter(intersection, intersection.begin()));

    vector<std::vector<int>> result;
    if (issame(l1, l2)) {
        for (int i = 0; i < 2; ++i) {
            vector<int> temp(intersection.begin(), intersection.end());
            result.push_back(temp);
        }
    } else {
        for (int i = 0; i < 2; ++i) {
            if (i == 0) {
                vector<int> temp1(intersection.begin(), intersection.end());
                result.push_back(temp1);
            } else {
                vector<int> temp2(intersection.begin(), intersection.end());
                result.push_back(temp2);
            }
        }
    }
    return result;
}