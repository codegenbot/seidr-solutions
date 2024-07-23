#include <set>
#include <vector>

using namespace std;

bool issame(vector<int> v1, vector<int> v2) {
    if (v1.size() != v2.size())
        return false;
    set<vector<int>> s({v1, v2});
    return s.size() == 1;
}

vector<int> unique(vector<int> l) {
    set<int> s(l.begin(), l.end());
    vector<int> res(std::initializer_list<int>{s.begin(), s.end()});
    return res;
}