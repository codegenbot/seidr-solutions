```cpp
double diceGame(int n, int m) {
    double total = 0.0;
    for (int i = std::max(m, 1); i < n; i++) { 
        total += 1.0/static_cast<double>(m);
    }
    return total;
}