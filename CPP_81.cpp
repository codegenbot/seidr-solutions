#include <algorithm>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size()) return false;
    vector<string> intersection;
    set<string>(intersection.begin(), intersection.end());
    copy_if(b.begin(), b.end(), back_inserter(intersection),
        bind2nd(not_equal_to<string>(), *a.rbegin()));
    return intersection.empty();
}