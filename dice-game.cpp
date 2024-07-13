```cpp
double diceGame(int n, int m) {
    double total = (n-m)/(m*1.0);
    if(n <= m)
        return 0;
    else
        return total;
}