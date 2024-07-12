#include <vector>
#include <cassert>

namespace std {

    vector<int> eat(int a, int b, int c) {
        return {b, a - c};
    }

    bool issame(const vector<int>& a, const vector<int>& b) {
        return a == b;
    }

}