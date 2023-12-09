#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool issame(vector<int> a, vector<int> b) {
    return (a == b);
}

vector<int> common(vector<int> a, vector<int> b) {
    vector<int> result;
    for (auto i = 0; i < a.size(); ++i) {
        if (std::find(b.begin(), b.end(), a[i]) != b.end()) {
            result.push_back(a[i]);
        }
    }
    return result;
}

int main() {
    vector<int> v1 = {4, 3, 2, 8};
    vector<int> v2 = {};

    assert (issame(common(v1, v2), {}));

    cout << "The common elements of the two vectors are: ";
    for (auto i : common(v1, v2)) {
        cout << i << " ";
    }
    return 0;
}