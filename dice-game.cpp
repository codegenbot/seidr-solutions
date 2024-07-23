```cpp
#include <algorithm>

double diceGame(int n, int m) {
    double total = 1.0;
    double petersWin = 0.0;

    for (int i = 1; i <= std::max(m, n); i++) { 
        if(i<n && i>=1){
            petersWin += (n - i + 1) / (double)(m * n - i);
        }
    }

    return petersWin;
}

int main() {
    return 0;
}