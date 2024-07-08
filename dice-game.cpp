```c
int main() {
    double result = diceGame(6, 6); 
    return 0;
}

double diceGame(int n, int m) {
    double total = 0.0;
    for (int i = 1; i < m; i++) {
        total += 1.0 / n;
    }
    for (int i = m + 1; i <= n; i++) {
        total += 1.0;
    }
    return total;
}