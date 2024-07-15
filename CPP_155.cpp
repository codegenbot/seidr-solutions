#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

bool issame(vector<int> a, vector<int> b);

vector<int> even_odd_count(int num) {
    vector<int> count(2, 0);
    string numStr = to_string(abs(num));
    for (char c : numStr) {
        if ((c - '0') % 2 == 0) {
            count[0]++;
        } else {
            count[1]++;
        }
    }
    return count;
}

int test_main() {
    vector<int> testResult = even_odd_count(0);
    if (issame(testResult, {1, 0})) {
        cout << "Test Passed!";
    } else {
        cout << "Test Failed!";
    }

    return 0;
}