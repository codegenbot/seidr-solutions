#include <unordered_set>

vector<int> common(vector<int> l1, vector<int> l2) {
    unordered_set<int> set1(l1.begin(), l1.end());
    set1.erase(unique(set1.begin(), set1.end()), set1.end());

    unordered_set<int> set2(l2.begin(), l2.end());
    set2.erase(unique(set2.begin(), set2.end()), set2.end());

    set_intersection(set1.begin(), set1.end(), set2.begin(), set2.end(),
        back_inserter(set1));

    return vector<int>(set1.begin(), set1.end());
}