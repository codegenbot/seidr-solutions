#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> sort_third(vector<int> l) {
    vector<int> res = l;
    for (int i = 0; i < l.size(); i += 3) {
        sort(res.begin() + i, res.begin() + i + min(3, (int)l.size() - i));
    }
    return res;
}

bool isSame(vector<int> a, vector<int> b) {
    return a == b;
}