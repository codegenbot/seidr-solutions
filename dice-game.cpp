```cpp
double getProbability(int n, int m) {
    double prob = 0;
    for (int i = 1; i < m; ++i) {
        prob += (double)1/(m);
    }
    return prob;
}