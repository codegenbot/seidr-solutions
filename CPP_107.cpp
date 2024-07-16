#include <vector>
#include <string>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    return (a[0] == b[0] && a[1] == b[1]);
}

vector<int> count_palindromes(int n) {
    vector<int> result(2, 0);
    for (int i = 1; i <= n; ++i) {
        string s = to_string(i);
        string rev = s;
        reverse(rev.begin(), rev.end());
        if (s == rev) {
            if (i % 2 == 0) {
                result[0]++;
            } else {
                result[1]++;
            }
        }
    }
    return result;
}

int main() {
    vector<int> input = count_palindromes(100);
    vector<int> expected_output = {9, 10};

    if (issame(input, expected_output)) {
        cout << "Test Passed" << endl;
    } else {
        cout << "Test Failed" << endl;
    }

    return 0;
}