```cpp
#include <vector>
#include <set>

vector<vector<int>> issame(vector<int> a, vector<int> b) {
    // Your logic for checking if the vectors are same
}

bool checkSame(vector<int> l1, vector<int> l2) {
    return (l1.size() == l2.size()) && std::equal(l1.begin(), l1.end(), l2.begin());
}

vector<int> common(vector<int> l1, vector<int> l2) {
    set<int> s1(l1.begin(), l1.end());
    set<int> s2(l2.begin(), l2.end());

    set<int> intersection;
    set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(),
        inserter(intersection, intersection.begin()));

    vector<int> result(intersection.begin(), intersection.end());
    return result;
}