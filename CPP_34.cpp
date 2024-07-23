#include <set>
using namespace std;

vector<int> unique(vector<int> l) {
    set<int> s(l.begin(), l.end());
    vector<int> res(s.begin(), s.end());
    return res;
}