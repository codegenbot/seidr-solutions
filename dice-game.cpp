```cpp
double diceGame(int n, int m) {
    double total = 0;
    
    for (int i = 1; i <= n; i++) { 
        for (int j = 1; j < i && j <= m; j++) { 
            total += 1.0 / (n * m);
        }
    }
    
    return 1 - total;
}