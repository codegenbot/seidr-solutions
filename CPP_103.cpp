string rounded_avg(int n, int m) {
    if (n > m)
        return "-1";
    long long odd_sum = 0, even_sum = 0;
    bool is_odd = false;
    for (int i = n; i <= m; i++) {
        if (i & 1) {
            odd_sum += i;
            is_odd = true;
        } else {
            even_sum += i;
        }
    }
    long long avg = (is_odd ? odd_sum : even_sum) / ((m - n + 1) >> is_odd);
    string res = "";
    while (avg > 0) {
        if (avg & 1)
            res.push_back('1');
        else
            res.push_back('0');
        avg >>= 1;
    }
    std::reverse(res.begin(), res.end());
    return res;
}