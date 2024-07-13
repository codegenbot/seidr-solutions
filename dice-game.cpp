```cpp
double diceGame(int n, int m) {
    double total = 0.0;
    for (int i = 1; i < n; i++) { 
        for (int j = 1; j <= m && j < i; j++) {
            total += 1.0/(n*m);
        }
    }
    return total;
}