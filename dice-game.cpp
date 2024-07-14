Here is the solution:

double getProbability(int n, int m) {
    double probability = 0.0;
    for (int i = 1; i < n; ++i) {
        probability += (double)1 / m;
    }
    return probability;
}