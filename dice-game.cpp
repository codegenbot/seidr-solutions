```cpp
double getProbability(int n, int m) {
    if(n < m) {
        double temp = n;
        n = m;
        m = temp;
    }
    return 1.0 * (n - 1) / (n * m);
}