#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const vector<int>& a, const vector<int>& b){
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a == b;
}