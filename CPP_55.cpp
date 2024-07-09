#include <vector>

using namespace std;

int fib(int n) {
    if (n <= 1) return n;
    vector<int> fibSeq = {0, 1};
    for (int i = 2; i <= n; ++i) {
        fibSeq.push_back(fibSeq[i-1] + fibSeq[i-2]);
    }
    return fibSeq[n];
}