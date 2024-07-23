#include <algorithm>

double probability(int n, int m) {
    if (n < 1 || m < 1) {
        throw std::runtime_error("Invalid input: both sides should be greater than zero.");
    }
    double total = (double)n * m;
    double higher = 0.0;
    for (int i = 1; i <= std::min(n,m); i++) {
        if(i >= n || i >= m) continue;
        higher += (double)(n-i)*(m-i+1)/total;
    }
    return higher;
}