#include <vector>
#include <string>
#include <algorithm>

bool issame(const vector<string>& a, const vector<string>& b) {
    return lexicographical_compare(a.begin(), a.end(), b.begin(), b.end());
}