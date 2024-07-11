#include <vector>
using namespace std;

vector<int> f(int n) {
    vector<int> res(n);
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0)
            res[i - 1] = 1;
        else
            for (int j = 1; j <= i; j++)
                res[i - 1] += j;
    }
    return res;
}