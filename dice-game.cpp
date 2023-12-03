#include <iostream>

double probabilityHigher(int n, int m) {
    if(n <= 1 && m <= 1) {
        return 0.0;
    }

    return static_cast<double>(n-1) / (n+m-2);
}

int main() {
    int n, m;
    std::cin >> n >> m;
    
    double probability = probabilityHigher(n, m);
    std::cout << probability << std::endl;

    return 0;
}