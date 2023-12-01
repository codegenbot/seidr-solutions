#include <vector>
#include <cassert>

using namespace std;

vector<int> tri(int n) {
    vector<int> sequence;
    sequence.push_back(3); // First element is always 3

    if (n == 0) {
        return sequence;
    }

    sequence.push_back(1 + n / 2); // Second element

    if (n == 1) {
        return sequence;
    }

    sequence.push_back(sequence[1] + sequence[0]); // Third element

    for (int i = 3; i <= n; i++) {
        if (i % 2 == 0) {
            sequence.push_back(1 + i / 2);
        } else {
            sequence.push_back(sequence[i - 1] + sequence[i - 2] + sequence[i - 3]);
        }
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
    assert(issame(tri(2), {1, 3, 4}));
    assert(issame(tri(3), {1, 3, 4, 8}));
    assert(issame(tri(4), {1, 3, 4, 8, 9}));

    return 0;
}