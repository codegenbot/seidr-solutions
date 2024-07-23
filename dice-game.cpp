#include <algorithm>
#include <iostream>

double probability(int n, int m) {
    if (n < 1 || m < 1) {
        std::cout << "Error: Sides of the dice cannot be less than 1." << std::endl;
        return -1;
    }
    double total = (double)n * m;
    double higher = 0.0;
    for (int i = 1; i <= std::min(n,m); i++) {
        if(i < n && i > m) {
            higher += (double)(n-i)*(m-i+1)/total;
        }
    }
    return higher;
}