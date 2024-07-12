```cpp
double diceGame(int n, int m) {
    double total = 0.0;
    for (int i = 1; i < n; i++) { 
        total += (m - (n - 1)) / (n * m);
    }
    return total;
}