Here is the solution:

#include <iostream>

double probability(int n, int m) {
    if (n > m)
        return 1.0 - ((double)m / n);
    else if (m > n)
        return (double)m / n;
    else
        return 0.5;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    std::cout << probability(n, m) << std::endl;
    return 0;
}