#include <vector>
using namespace std;

vector<int> f(int n) {
    vector<int> result(n);
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) { // even index
            long long factorial = 1;
            for (long long j = 1; j <= i; j++) {
                factorial *= j;
            }
            result[i] = static_cast<int>(factorial);
        } else { // odd index
            int sum = 0;
            for (int j = 1; j <= i; j++) {
                sum += j;
            }
            result[i] = sum;
        }
    }
    return result;
}