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

void compareVectors(const vector<int>& v1, const vector<int>& v2) {
    if (v1 == v2) {
        cout << "Test Passed" << endl;
    } else {
        cout << "Test Failed" << endl;
    }
}

int main() {
    compareVectors(f(3), vector<int>{1, 2, 6});
    return 0;
}