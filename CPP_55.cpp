Here is the solution:

```cpp
#include <vector>

using namespace std;

int fib(int n) {
    if (n <= 1)
        return n;
    vector<int> fibSeries(2);
    fibSeries[0] = 0;
    fibSeries[1] = 1;
    for (int i = 2; i <= n; ++i) {
        fibSeries.push_back(fibSeries[i-1] + fibSeries[i-2]);
    }
    return fibSeries[n];
}