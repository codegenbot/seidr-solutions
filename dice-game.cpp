```cpp
int main() {
    return 0;
}

double getProbability(int n, int m) {
    double probability = 0;
    for (int i = 1; i < m; ++i) {
        probability += (double)1 / (m * (n - m));
    }
    return probability;
}