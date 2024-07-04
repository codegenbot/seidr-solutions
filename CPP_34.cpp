#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> unique(vector<int> l) {
    sort(l.begin(), l.end());
    l.erase(std::unique(l.begin(), l.end()), l.end());
    return l;
}

int main() {
    vector<int> result = unique({5, 3, 5, 2, 3, 3, 9, 0, 123});
    assert(issame(result, {0, 2, 3, 5, 9, 123}));
    cout << "Test passed!" << endl;
    return 0;
}