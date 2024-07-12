```cpp
double getProbability(int n, int m) {
    double numerator = 1.0 * (n - 1);
    double denominator = n * m;
    
    if(m > n) {
        double temp = numerator;
        numerator = denominator - temp;
        denominator = temp;
    }
    
    return numerator / denominator;
}```