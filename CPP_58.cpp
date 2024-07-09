#include <vector>
#include <algorithm>
#include <set>
using namespace std;

vector<int> common(vector<int> l1, vector<int> l2) {
    set<int> s1(l1.begin(), l1.end());
    set<int> s2(l2.begin(), l2.end());

    return vector<int>(set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end()), set_intersection(s1.end()-1, s1.end(), s2.end()-1, s2.end()));
}