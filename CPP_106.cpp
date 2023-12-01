#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

vector<int> f(int n) {
    vector<int> result;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            int factorial = 1;
            for (int j = 1; j <= i; j++) {
                factorial *= j;
            }
            result.push_back(factorial);
        } else {
            int sum = 0;
            for (int j = 1; j <= i; j++) {
                sum += j;
            }
            result.push_back(sum);
        }
    }
    return result;
}

int main() {
    assert(f(3) == vector<int>({1, 2, 6}));
    assert(f(5) == vector<int>({1, 2, 6, 24, 120}));
    assert(f(1) == vector<int>({1}));
    assert(f(0) == vector<int>({}));

    return 0;
}