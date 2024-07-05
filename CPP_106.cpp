#include <vector>
using namespace std;

vector<int> f(int n) {
    vector<int> result(n, 0);
    for (int i = 0; i < n; ++i) {
        int idx = i + 1;
        if (idx % 2 == 0) {
            int factorial = 1;
            for (int j = 1; j <= idx; ++j) {
                factorial *= j;
            }
            result[i] = factorial;
        } else {
            int sum = 0;
            for (int j = 1; j <= idx; ++j) {
                sum += j;
            }
            result[i] = sum;
        }
    }
    return result;
}