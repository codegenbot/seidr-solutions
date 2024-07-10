#include <iostream>
#include <iomanip>

double probability(int n, int m) {
    double total = (double)n * m;
    double p = 0;

    // Calculate the probability that Peter rolls higher than Colin
    for (int i = 1; i <= min(n, m); i++) {
        p += (n-i)/(double)(n*m);
    }

    return p;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    double output = probability(n, m);
    std::cout << std::fixed << std::setprecision(9) << output << std::endl;
    return 0;
}