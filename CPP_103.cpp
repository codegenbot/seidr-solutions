Here is the completed code:

string rounded_avg(int n, int m) {
    if (n > m)
        return "-1";
    int sum = 0;
    for (int i = n; i <= m; i++)
        sum += i;
    double average = round((double)sum / (m - n + 1));
    string binary = to_string(average);
    binary.resize(binary.length() - binary.find('.'), '0');
    return binary;
}