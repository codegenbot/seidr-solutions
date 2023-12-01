#include <vector>

vector<int> f(int n) {
    vector<int> result;
    int fact = 1, sum = 0;
    
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) { // If i is even
            fact *= i;
            result.push_back(fact);
        } else { // If i is odd
            sum += i;
            result.push_back(sum);
        }
    }
    
    return result;
}