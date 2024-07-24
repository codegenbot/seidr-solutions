#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>

using namespace std;

vector<int> common(const vector<int>& a, const vector<int>& b) {
    vector<int> result;
    for (int i : a) {
        if (find(b.begin(), b.end(), i) != b.end()) {
            result.push_back(i);
        }
    }
    return result;
}

bool areSame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

int main() {
    assert(areSame(common({4, 3, 2, 8}, {}) , {}));
    return 0;
}