#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>

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
    assert (issame(generate_integers(17, 20), {18, 20}));
    assert (issame(generate_integers(10, 15), {10, 12, 14}));
    assert (issame(generate_integers(2, 2), {2}));
    assert (issame(generate_integers(5, 5), {}));
    cout << "All tests passed!" << endl;
    return 0;
}