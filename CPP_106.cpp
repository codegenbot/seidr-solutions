#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>
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
    assert(equal(f(3).begin(), f(3).end(), vector<int>{1, 2, 6}.begin(), vector<int>{1, 2, 6}.end()));
    // Add more test cases here
    assert(equal(f(1).begin(), f(1).end(), vector<int>{1}.begin(), vector<int>{1}.end()));
    assert(equal(f(5).begin(), f(5).end(), vector<int>{1, 2, 6, 4, 15}.begin(), vector<int>{1, 2, 6, 4, 15}.end()));
    assert(equal(f(0).begin(), f(0).end(), vector<int>{}.begin(), vector<int>{}.end()));
    assert(equal(f(10).begin(), f(10).end(), vector<int>{1, 2, 6, 4, 15, 720, 8, 5040, 46080, 10}.begin(), vector<int>{1, 2, 6, 4, 15, 720, 8, 5040, 46080, 10}.end()));

    return 0;
}