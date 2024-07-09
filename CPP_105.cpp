#include <string>
#include <unordered_set>

bool issame(vector<string> a, vector<string> b) {
    return unordered_set<string>(a.begin(), a.end()) == unordered_set<string>(b.begin(), b.end());
}