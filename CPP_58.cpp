#include <set>

vector<int> common(vector<int> l1, vector<int> l2) {
    set<int> s1(l1.begin(), l1.end());
    set<int> s2(l2.begin(), l2.end());

    set<int> commonElements;
    set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(),
        inserter(commonElements, commonElements.begin()));
    vector<int> result(commonElements.begin(), commonElements.end());
    sort(result.begin(), result.end()); // Sorting the result
    return result;
}