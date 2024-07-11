#include <iostream>
#include <string>
double probability(std::string n, std::string m);

int main() {
    std::string n, m;
    std::cin >> n >> m;
    int N = std::stoi(n), M = std::stoi(m);
    double result = probability(N, M);
    std::cout << std::setf(std::ios_base::fixed) << std::setprecision(2) << result << std::endl;
}

double probability(int N, int M) {
    if (N < M)
        return 0.0;
    else
        return (M + 1.0) / N;
}