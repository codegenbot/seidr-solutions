#include <algorithm>
#include <iostream>

double probability(int n, int m) {
    if (n < 1 || m < 1) {
        std::cerr << "Invalid input: Both Peter and Colin must roll at least one die." << std::endl;
        return -1.0;
    }
    double total = (double)n * m;
    double higher = 0.0;
    for (int i = 1; i <= std::min(n,m); i++) {
        higher += (double)(n-i)*(m-i+1)/total;
    }
    return higher;
}