string rounded_avg(int n, int m) {
    if (n > m) return "-1";
    long sum = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
    }
    double avg = round((double)sum / (m - n + 1));
    string bin = "";
    while (avg > 0) {
        if (avg >= 2.0) {
            avg -= 2.0;
            bin = "1" + bin;
        } else if (avg == 1.0) {
            avg = 0.0;
            bin = "1" + bin;
        } else {
            avg = round(avg);
            bin = "0" + bin;
        }
    }
    return bin;
}