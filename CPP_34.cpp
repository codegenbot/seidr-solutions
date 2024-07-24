#include <algorithm>
#include <set>

using namespace std;

vector<int> unique(vector<int> l) {
    set<int> s(l.begin(), l.end());
    vector<int> result(s.begin(), s.end());
    sort(result.begin(), result.end());
    return result;
}