Here is the completed code:

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
            result += "1";
            avg -= 2;
        } else {
            result += "0";
        }
        avg /= 2;
    }
    return result;
}