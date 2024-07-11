```cpp
int main() {
    double result = getProbability(6, 6); // Replace with your desired inputs
    return 0;
}

double getProbability(int n, int m) {
    double p = 0;
    for (int i = 1; i <= n - m; ++i) {
        p += (n - i) * (1.0 / n) * (1.0 / m);
    }
    return p;
}