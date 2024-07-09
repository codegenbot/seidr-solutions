#include <vector>
#include <algorithm>
using namespace std;

vector<int> common(vector<int> l1, vector<int> v2) {
    set<int> s1(l1.begin(), l1.end());
    set<int> s2(v2.begin(), v2.end());

    set<int> result;
    set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(),
        inserter(result, result.begin()));

    vector<int> common_result;
    for (int x : result) {
        common_result.push_back(x);
    }
    return common_result;
}