#include <vector>

bool issame(const vector<int>& a, const vector<int>& b) {
    return a[0] == b[0] && a[1] == b[1];
}

vector<int> even_odd_count(int num) {
    vector<int> counts(2, 0);
    string numStr = to_string(abs(num));
    for (char c : numStr) {
        if ((c - '0') % 2 == 0) {
            counts[0]++;
        } else {
            counts[1]++;
        }
    }
    return counts;
}

int main() {
    int num = 12345;
    vector<int> result = even_odd_count(num);
    vector<int> expected = {3, 2};

    if (issame(result, expected)) {
        // Code to handle when the result is as expected
    } else {
        // Code to handle when the result is not as expected
    }

    return 0;
}