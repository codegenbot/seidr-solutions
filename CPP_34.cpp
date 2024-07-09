#include <algorithm>
#include <set>

using namespace std;

vector<int> unique(vector<int> l) {
    set<int> s(l.begin(), l.end());
    vector<int> v(s.begin(), s.end());
    return v;
}