#include <vector>
#include <set>
#include <cassert>

using namespace std;

bool sameSets(vector<int> a, vector<int> b) {
    set<int> s1(a.begin(), a.end());
    set<int> s2(b.begin(), b.end());
    return s1 == s2;
}

vector<int> unique(vector<int> v) {
    set<int> s(v.begin(), v.end());
    return vector<int>(s.begin(), s.end());
}