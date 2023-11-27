#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<int> output = remove_duplicates_custom({5, 3, 5, 2, 3, 3, 9, 0, 123});
    vector<int> expected_output = {0, 2, 3, 5, 9, 123};

    assert(output == expected_output);

    cout << "Output is correct" << endl;
    return 0;
}