```cpp
#include <algorithm>
double probability(int n, int m) {
    if (n < 1 || m < 1) return -1;
    double total = (double)n * m;
    double higher = 0.0;
    for (int i = 1; i <= std::min({n,m}); i++) {
        higher += (double)(n-i)*(m-i+1)/total;
    }
    return higher;
}