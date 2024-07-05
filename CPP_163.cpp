#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> generate_integers(int a, int b) {
    vector<int> result;
    int start = min(a, b);
    int end = max(a, b);
    for (int i = start; i <= end; ++i) {
        if (i % 2 == 0) {
            result.push_back(i);
        }
    }
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    // Sample usage
    assert(issame(generate_integers(2, 8), {2, 4, 6, 8}));
    return 0;
}