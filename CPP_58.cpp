#include <algorithm>
using namespace std;

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> common(vector<int> l1, vector<int> l2) {
    set<int> s1(l1.begin(), l1.end());
    set<int> s2(l2.begin(), l2.end());

    set<int> common;
    set_difference(s1.begin(), s1.end(), s2.begin(), s2.end(),
        back_inserter(common));

    vector<int> result(common.begin(), common.end() - 1);
    return result;
}