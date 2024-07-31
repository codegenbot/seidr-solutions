```
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

vector<int> unique(vector<int> l) {
    set<int> s(l.begin(), l.end());
    return vector<int>(s.begin(), s.end());
}

vector<int>(unique({5, 3, 5, 2, 3, 3, 9, 0, 123}));