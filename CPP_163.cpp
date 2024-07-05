#include <vector>
#include <algorithm>
#include <cassert>
#include <iostream>

using namespace std;

vector<int> generate_integers(int a, int b) {
    vector<int> result;
    if (a > b) swap(a, b);
    for (int i = a; i <= b; ++i) {
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
    assert(issame(generate_integers(17, 89), {}));
    cout << "All tests passed!" << endl;
    return 0;
}