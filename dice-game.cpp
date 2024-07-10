Here is the solution:

double probability(int n, int m) {
    double total = (double)n * m;
    double p = 0.0;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j < i; j++) {
            if(j > m) break;
            p += 1.0 / total;
        }
    }

    return p;
}