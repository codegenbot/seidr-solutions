#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> sort_third(const vector<int>& l) {
    vector<int> res = l;
    for (int i = 0; i < l.size(); ++i) {
        if (i % 3 == 0) {
            sort(res.begin() + i, res.begin() + i + 3);
        }
    }
    return res;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(sort_third({5, 6, 3, 4, 8, 9, 2, 1}), {2, 6, 3, 4, 8, 9, 5, 1}));
    cout << "Test Passed!" << endl;
    return 0;
}