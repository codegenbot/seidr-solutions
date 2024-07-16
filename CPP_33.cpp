#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

vector<int> sort_third(const vector<int>& l) {
    vector<int> temp = l;
    for (size_t i = 2; i < l.size(); i += 3) {
        sort(temp.begin() + i - 2, temp.begin() + i + 1);
    }
    return temp;
}

assert(issame(sort_third({5, 6, 3, 4, 8, 9, 2, 1}), {2, 6, 3, 4, 8, 9, 5, 1}));