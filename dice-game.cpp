#include <iostream>
#include <iomanip>

double probability(int n, int m) {
    double total = (double)n * m;
    double p = 0;

    // Calculate the probability that Peter rolls higher or equal to Colin
    p += (n-1)/(double)(n*m);

    return 1 - p; 
}

int main() {
    int n, m;
    std::cin >> n >> m;
    double output = probability(n, m);
    std::cout << std::fixed << std::setprecision(9) << output << std::endl;
    return 0;
}