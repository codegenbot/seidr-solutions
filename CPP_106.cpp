#include <vector>

vector<int> f(int n) {
    vector<int> result(n);
    
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) { // If i is even
            int factorial = 1;
            for (int j = 1; j <= i; j++) {
                factorial *= j;
            }
            result[i] = factorial;
        } else { // If i is odd
            int sum = 0;
            for (int j = 1; j <= i; j++) {
                sum += j;
            }
            result[i] = sum;
        }
    }
    
    return result;
}