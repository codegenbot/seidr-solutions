#include <iostream>
#include <vector>
#include <algorithm>

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

vector<int> sort_third(const vector<int>& l) {
    vector<int> result = l;
    for (int i = 0; i < result.size(); i += 3) {
        sort(result.begin() + i, result.begin() + i + 3);
    }
    return result;
}

int main() {
    assert (issame(sort_third({5, 6, 3, 4, 8, 9, 2, 1}) , {2, 6, 3, 4, 8, 9, 5, 1}));
    return 0;
}