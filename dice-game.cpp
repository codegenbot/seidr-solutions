```cpp
#include <algorithm>

double diceGame(int n, int m) {
    double total = 0.0;
    for (int i = 1; i < n; i++) { 
        total += std::min(i, n)*std::min(m-i-1, 0)/static_cast<double>(n*m);
    }
    return total;
}

int main() { return 0; }