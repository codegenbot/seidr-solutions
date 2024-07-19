#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

vector<int> sort_third(vector<int> l) {
    vector<int> result = l;
    for (size_t i = 2; i < l.size(); i += 3) {
        sort(result.begin() + i - 2, result.begin() + i + 1);
    }
    return result;
}

assert(issame(sort_third({5, 6, 3, 4, 8, 9, 2, 1}), {5, 6, 2, 1, 8, 9, 3, 4}));