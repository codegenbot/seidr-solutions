#include<vector>
using namespace std;

vector<int> f(int n) {
    vector<int> result(n);
    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 0) {
            // Calculate factorial for even i
            int factorial = 1;
            for (int j = 1; j <= i; ++j) {
                factorial *= j;
            }
            result[i - 1] = factorial;
        } else {
            // Calculate sum of numbers from 1 to i for odd i
            int sum = 0;
            for (int j = 1; j <= i; ++j) {
                sum += j;
            }
            result[i - 1] = sum;
        }
    }
    return result;
}