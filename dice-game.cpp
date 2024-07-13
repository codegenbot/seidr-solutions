double probability(int n, int m) {
    double total = (double)(n * m);
    double p = 0;

    for (int i = 1; i <= n && i < m; i++) {
        p += 1.0 / total;
    }

    return p;
}

int main() { return 0; }