#include <iostream>
#include <set>
#include <vector>
using namespace std;

vector<int> unique(vector<int> l) {
    set<int> s(l.begin(), l.end());
    vector<int> v(s.begin(), s.end());
    return v;
}