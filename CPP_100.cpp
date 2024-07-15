#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>
#include <iterator>  

using namespace std;

vector<int> make_a_pile(int n) {
    vector<int> result;
    for(int i = 0; i < n; ++i) {
        result.push_back(8 + i*2);
    }
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(make_a_pile(8), {8, 10, 12, 14, 16, 18, 20, 22}));
}