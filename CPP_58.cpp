#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

int main() {
    vector<int> vec1 = {1, 2, 3};
    vector<int> vec2 = {1, 2, 3};

    if (issame(vec1, vec2)) {
        cout << "Vectors are the same." << endl;
    } else {
        cout << "Vectors are different." << endl;
    }

    assert(issame(vector<int>({4, 3, 2, 8}), vector<int>{});

    return 0;
}