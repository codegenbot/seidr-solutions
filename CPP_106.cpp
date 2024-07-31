#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

void validate(const vector<int>& result, const vector<int>& expected) {
    if (result.size() != expected.size()) {
        cout << "Validation failed" << endl;
        return;
    }
    for (int i = 0; i < result.size(); ++i) {
        if (result[i] != expected[i]) {
            cout << "Validation failed" << endl;
            return;
        }
    }
    cout << "Validation successful" << endl;
}

vector<int> f(int n) {
    vector<int> result(n);
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            int fact = 1;
            for (int j = 1; j <= i; ++j) {
                fact *= j;
            }
            result[i] = fact;
        } else {
            int sum = 0;
            for (int j = 1; j <= i; ++j) {
                sum += j;
            }
            result[i] = sum;
        }
    }
    return result;
}

int main() {
    vector<int> result = f(3);
    vector<int> expected = {1, 2, 6};
    validate(result, expected);
    return 0;
}