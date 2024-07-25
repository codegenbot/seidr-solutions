Here is the solution:

double calculateProbability(int n, int m) {
    double probability = 0;
    for (int i = 1; i < n; i++) {
        probability += 1.0 / m;
    }
    return probability;
}