#include <vector>
#include <algorithm>
#include <cassert>
using namespace std;

bool issame(vector<int> a, vector<int> b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a == b;
}