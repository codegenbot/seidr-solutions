#include <vector>
#include <assert>
#include <set>
#include <algorithm>

using namespace std;

vector<int> common(vector<int> l1, vector<int> b2) {
    set<int> s1(l1.begin(), l1.end());
    set<int> s2(b2.begin(), b2.end());
    set<int> intersection;
    set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(),
        inserter(intersection, intersection.begin()));
    vector<int> result(intersection.begin(), intersection.end());
    sort(result.begin(), result.end());
    return result;
}

int main() {
    assert(common({4, 3, 2, 8}, {}) == {});
    vector<int> list1 = {1, 2, 3};
    vector<int> list2 = {1, 2, 4};
    
    common(list1, list2);
    return 0;
}