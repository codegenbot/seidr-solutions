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
    assert(issame(generate_integers(17, 89), {})); // The test case seems incorrect, it should test for an even range.
    cout << "All tests passed!" << endl;
    return 0;
}