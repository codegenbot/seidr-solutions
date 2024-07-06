#include <stdio.h>
#include <vector>
using namespace std;

vector<int> f(int n) {
    vector<int> result(n);
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) { // if i is even
            int fact = 1;
            for (int j = 1; j <= i; j++) {
                fact *= j;
            }
            result[i - 1] = fact; // store the factorial at index i-1
        } else { // if i is odd
            int sum = 0;
            for (int j = 1; j <= i; j++) {
                sum += j;
            }
            result[i - 1] = sum; // store the sum at index i-1
        }
    }
    return result;
}