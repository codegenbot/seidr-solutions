#include <iostream>
#include <iomanip>

double probability(int n, int m) {
    double total = (double)n * m;
    double p = 0;

    // Calculate the probability that Peter rolls at least as high as Colin
    p += (n-1)/(double)(n*m);

    // Subtract the probability that they roll equally from this to get the probability that Peter rolls strictly higher than Colin
    p -= 1/m;

    return p;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    double output = probability(n, m);
    std::cout << std::fixed << std::setprecision(9) << output << std::endl;
    return 0;