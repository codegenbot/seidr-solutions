string rounded_avg(int n, int m) {
    if (n > m)
        return "-1";
    double sum = 0;
    for (int i = n; i <= m; i++)
        sum += i;
    double avg = sum / (m - n + 1);
    std::ostringstream oss;
    oss << std::fixed << std::setprecision(10) << avg;
    return oss.str();
}