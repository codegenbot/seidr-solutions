#include <vector>
#include <iostream>
#include <cassert>
#include <cmath>

using namespace std;

vector<int> compare(const vector<int>& a, const vector<int>& b) {
    vector<int> result;
    for(size_t i = 0; i < min(a.size(), b.size()); ++i) {
        result.push_back(abs(a[i] - b[i]));
    }
    return result;
}

bool areEqual(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

int main() {
    assert(areEqual(compare({1,2,3,5},{-1,2,3,4}), {2,0,0,1}));
}