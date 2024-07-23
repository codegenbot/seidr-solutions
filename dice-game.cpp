```
double probability(int n, int m) {
    double total = (double)n * m;
    double count = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i > j) {
                count++;
            } else if (i < j) {
                count++;
            }
        }
    }

    return count / total;
}

int main() { return probability(0, 0); }