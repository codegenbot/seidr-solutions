#include <vector>
#include <algorithm>
#include <cassert>
using namespace std;

bool issame(const vector<int>& a, const vector<int>& b) {
    return is_permutation(a.begin(), a.end(), b.begin(), b.end());
}