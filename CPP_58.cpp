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

    if (common(vec1, vec2).empty()) {
        cout << "Vectors are different." << endl;
    } else {
        cout << "Vectors are the same." << endl;
    }

    assert(common({4, 3, 2, 8}, {}).empty());

    return 0;
}