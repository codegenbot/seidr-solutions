for(int i = 1; i < n; ++i) {
    probability += 1.0 / n * (m - i) / m;
}
probability += 1.0 / n;  // Add probability of rolling highest number