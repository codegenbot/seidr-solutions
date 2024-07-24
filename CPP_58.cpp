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

int main() {
    vector<int> vec1 = {1, 2, 3};
    vector<int> vec2 = {1, 2, 3};

    if (issame(vec1, vec2)) {
        cout << "Vectors are the same." << endl;
    } else {
        cout << "Vectors are different." << endl;
    }

    assert(issame(common({4, 3, 2, 8}, {}) , {}));

    return 0;
}