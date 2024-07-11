#include <vector>
#include <algorithm>
#include <string>

bool issame(const vector<string>& a, const vector<string>& b) {
    return equal(a.begin(), a.end(), b.begin());
}