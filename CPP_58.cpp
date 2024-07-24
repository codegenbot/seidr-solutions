#include <vector>
#include <set>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<std::vector<int>> common(std::vector<int> l1, std::vector<int> l2) {
    set<int> s1(l1.begin(), l1.end());
    set<int> s2(l2.begin(), l2.end());

    set<int> intersection(s1.begin(), s1.end());
    set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(),
        inserter(intersection, intersection.begin()));

    vector<int> result(intersection.begin(), intersection.end());
    return {{l1}, {l2}};
}