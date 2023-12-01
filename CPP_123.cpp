#include <vector>

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

vector<int> get_odd_collatz(int n) {
    vector<int> collatz_seq;
    collatz_seq.push_back(n);
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
        collatz_seq.push_back(n);
    }
    vector<int> odd_collatz_seq;
    for (int i = 0; i < collatz_seq.size(); i++) {
        if (collatz_seq[i] % 2 != 0) {
            odd_collatz_seq.push_back(collatz_seq[i]);
        }
    }
    sort(odd_collatz_seq.begin(), odd_collatz_seq.end());
    return odd_collatz_seq;
}

int main() {
    // Test cases
    vector<int> expected = {1, 3, 5, 7};
    vector<int> result = get_odd_collatz(10);
    bool is_same = issame(expected, result);
    if (is_same) {
        return 0;
    } else {
        return 1;
    }
}