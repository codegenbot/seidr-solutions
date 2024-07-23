```cpp
#include <algorithm>
#include <iostream>

double probability(int n, int m) {
    if (n < 1 || m < 1) {
        std::cerr << "Error: Both dice must have at least one side." << std::endl;
        return -1.0;
    }
    double total = (double)n * m;
    double higher = 0.0;
    for (int i = 1; i <= std::min(n,m); i++) {
        if (n > m) {
            higher += (double)(n-i)*(m-i+1)/total;
        } else {
            if (i >= m) break;
            higher += (double)(m-i+1)*(n-i)/total;
        }
    }
    return higher;
}