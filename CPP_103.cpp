Here is the completed code:

string rounded_avg(int n, int m) {
    if (n > m) return "-1";
    int sum = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
    }
    double avg = round((double)sum / (m - n + 1));
    string binary = "";
    while (avg > 0) {
        if (avg >= 2) {
            avg /= 2;
            binary += "1";
        } else {
            avg *= 2;
            binary = "0" + binary;
        }
    }
    return binary;
}