#include <cmath>
double probability(int n, int m) {
    double total = (n * 1.0 + m - 1);
    return (m - 1.0) / total;
}

int main() {
    std::cout << "The probability of Peter rolling higher than Colin is: " << probability(6, 6) << std::endl;
    return 0;
}