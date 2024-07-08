#include <vector>

using namespace std;

int fibfib(int n) {
    if (n <= 1)
        return 0;
    vector<int> fibfib(3);
    fibfib[0] = 0; fibfib[1] = 0; fibfib[2] = 1;
    for (int i = 3; i <= n; ++i) {
        int sum = fibfib[i-1] + fibfib[i-2] + fibfib[i-3];
        fibfib.push_back(sum);
    }
    return fibfib[n];
}