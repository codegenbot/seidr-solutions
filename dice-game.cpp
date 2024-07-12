long double probability = 0.0;

for (int i = 1; i <= n; ++i) {
    for (int j = 1; j <= m; ++j) {
        if (i > j) {
            probability += 1.0 / (n * m);
        }
    }
}

cout << fixed << setprecision(10) << probability << endl;