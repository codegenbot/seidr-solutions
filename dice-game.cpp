#include <algorithm>

double diceGame(int n, int m) {
    double total = 0.0;
    for (int i = 1; i < n; i++) { 
        total += std::min(i+1, n)*std::min(m-1, m-std::min(n-i,0))/static_cast<double>(n*m);
    }
    return total;
}

int main() { return 0; }