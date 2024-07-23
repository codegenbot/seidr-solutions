#include <algorithm>
#include <cmath>

double diceGame(int n, int m) {
    double total = (double)n * m;
    double p = 0.0;
    
    // Add up cases where Peter wins
    for(int i = 1; i <= std::min(n, m); i++) {
        p += (n - i) / (total - (m - i));
    }
    
    // Subtract the cases where Peter ties or loses
    for(int i = 1; i < std::max(n, m); i++) {
        if(i <= n/2) p -= (i) / (total);
    }
    
    return p;
}

int main() {
    return 0;
}