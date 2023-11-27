#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

vector<int> tri(int n) {
    vector<int> sequence;
    sequence.push_back(3);

    if (n == 0) {
        return sequence;
    }

    sequence.push_back(1 + n / 2);

    if (n == 1) {
        return sequence;
    }

    int prev1 = 3;
    int prev2 = 2;
    int prev3 = 1 + n / 2;

    for (int i = 3; i <= n; i++) {
        int current = prev1 + prev2 + prev3;
        sequence.push_back(current);

        prev1 = prev2;
        prev2 = prev3;
        prev3 = current;
    }

    return sequence;
}

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
    assert(issame(tri(1), {1, 3}));

    cout << "All test cases passed successfully!" << endl;

    return 0;
}