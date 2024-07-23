#include <algorithm>

double diceGame(int n, int m) {
    double total = (double)n * m;
    double p = 0.0;

    for(int i = std::max(1, m - (n-1)); i <= m; i++) {
        if(i < (n+m)/2 + 1) p -= (i) / (total);
    }

    return p;
}

int main(int argc, char** argv) { return diceGame(6, 6); }