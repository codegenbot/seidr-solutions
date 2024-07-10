#include <iostream>
#include <iomanip>

double probability(int n, int m) {
    double total = (double)n * m;
    double p = 0;

    // Probability that they are different
    p += (n-1)/(double)(n*m);

    // Add the probability that Colin is higher
    p += ((m-1)/(double)(n*m));

    return 1 - p; 
}

int main() {
    int n, m;
    std::cin >> n >> m;
    double output = probability(n, m);
    std::cout << std::fixed << std::setprecision(9) << output << std::endl;
    return 0;
}