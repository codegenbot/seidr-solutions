string rounded_avg(int n, int m) {
    if (n > m) return "-1";
    double sum = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
    }
    double avg = round(sum / (m - n + 1));
    string result = "";
    while (avg > 0) {
        if (avg & 1) result.push_back('1');
        else result.push_back('0');
        avg /= 2;
    }
    reverse(result.begin(), result.end());
    return result;
}