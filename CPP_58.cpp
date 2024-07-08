#include <vector>
#include <algorithm>
using namespace std;

vector<int> common(vector<int> l1, vector<int> l2) {
    set<int> s1(l1.begin(), l1.end());
    set<int> s2(l2.begin(), l2.end());

    set<int> result_set;
    set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(),
        inserter(result_set, result_set.begin()));

    vector<int> result(vector<int>(result_set.begin(), result_set.end()));
    return result;
}