string rounded_avg(int n, int m) {
    if (n > m) return "-1";
    long sum = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
    }
    double avg = round((double)sum / (m - n + 1));
    string result = "";
    while (avg > 0) {
        if (avg >= 2) {
            avg -= 2;
            result += '1';
        } else {
            avg++;
            result += '0';
        }
    }
    return result;
}