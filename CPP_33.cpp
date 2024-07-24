#include <vector>
#include <algorithm>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a == b;
}

vector<int> sort_third(vector<int> vec) {
    sort(vec.begin() + 2, vec.end());
    return vec;
}