Here is the completed code:

string rounded_avg(int n, int m) {
    if (n > m) return "-1";
    long sum = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
    }
    double avg = round((double)sum / (m - n + 1));
    string bin = "";
    while (avg > 0) {
        bin = (avg % 2 == 0 ? "0" : "1") + bin;
        avg /= 2;
    }
    return bin;
}