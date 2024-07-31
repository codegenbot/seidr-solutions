#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

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
    vector<int> expected = {1, 2, 6};
    vector<int> actual = f(3);

    for (int i = 0; i < actual.size(); ++i) {
        cout << actual[i] << " ";
    }
    cout << endl;

    assert(actual == expected);
    cout << "Test Passed!" << endl;
    return 0;
}