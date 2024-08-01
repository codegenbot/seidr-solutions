#include <vector>
#include <cassert> 
#include <algorithm>

using namespace std;

vector<int> make_a_pile(int n) {
    vector<int> v;
    for (int i = 1; i <= n; i++) {
        v.push_back(2 * i + 6);
    }
    return v;
}

bool issame(vector<int> a, vector<int> b) {
    return equal(a.begin(), a.end(), b.begin(), b.end());
}