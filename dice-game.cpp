```cpp
double diceGame(int n, int m) {
    double total = 0.0;
    for (int i = 1; i < n; i++) { 
        total += min(i+1, n)*min(m-1, m-min(n-i,0))/static_cast<double>(n*m);
    }
    return total;
}