std::string rounded_avg(int n, int m) {
    if (n > m) return "-1";
    double sum = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
    }
    double avg = round(sum / (double)(m - n + 1));
    std::string binary = "";
    while (avg > 0) {
        if (avg >= 2) {
            avg /= 2;
            binary = "1" + binary;
        } else {
            avg++;
            binary = "0" + binary;
        }
    }
    return binary;
}