#include <vector>

using namespace std;

vector<int> f(int n) {
    vector<int> result(n);
    int factorial = 1;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            result[i] = factorial;
            factorial *= (i + 1);
        } else {
            sum += (i + 1);
            result[i] = sum;
        }
    }
    return result;
}