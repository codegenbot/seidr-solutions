```cpp
#include <set>
#include <algorithm>

bool issame(vector<int> a,vector<int>b) {
    // Define your logic here
    if(a.size() == b.size())
        return true;
    else
        return false;
}

vector<int> common(vector<int> l1, vector<int> l2) {
    set<int> s1(l1.begin(), l1.end());
    set<int> s2(l2.begin(), l2.end());

    set<int> intersection;
    set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(),
                      std::inserter(intersection, intersection.end()));

    vector<int> result(intersection.begin(), intersection.end());
    return result;
}

int main() {
    assert(common({4, 3, 2, 8}, {}) == {});
    return 0;
}