#include <algorithm>

double diceGame(int n, int m) {
    double total = 0.0;
    for (int i = std::max(m, 1); i <= n; i++) { 
        total += static_cast<double>(n - i + 1) / static_cast<double>(m);
    }
    return total;
}

int main() {
    return 0;
}