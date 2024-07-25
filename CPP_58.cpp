#include <algorithm>
using namespace std;

vector<int> common(vector<int> l1, vector<int> l2) {
    set<int> s1(l1.begin(), l1.end());
    set<int> s2(l2.begin(), l2.end());

    set<int> common;
    set_difference(s1.begin(), s1.end(), s2.begin(), s2.end(),
        inserter(common, common.begin()));

    vector<int> result;
    for (int x : common) {
        if (find(std::begin(result), std::end(result), x) == std::end(result)) {
            result.push_back(x);
        }
    }
    return result;
}