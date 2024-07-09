#include <vector>
using namespace std;

vector<int> f(int n) {
    vector<int> result(n);
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) { // even index
            int fact = 1;
            for (int j = 1; j <= i; j++)
                fact *= j;
            result[i] = fact;
        } else { // odd index
            int sum = 0;
            for (int j = 1; j <= i; j++)
                sum += j;
            result[i] = sum;
        }
    }
    return result;
}