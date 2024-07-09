#include <vector>
#include <algorithm>
using namespace std;

vector<int> common(vector<int> l1, vector<int> v2) {
    set<int> s1(l1.begin(), l1.end());
    set<int> s2(v2.begin(), v2.end());

    set<int> common_result;  // declare before using
    set<int> result;
    set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(),
        inserter(common_result, common_result.begin()));

    vector<int> result_vector;
    for (int x : common_result) {
        result_vector.push_back(x);
    }
    return result_vector;
}