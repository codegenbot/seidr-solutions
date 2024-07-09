vector<int> result(2, 0);
    for (int i = 1; i <= n; ++i) {
        string num = to_string(i);
        string reverse_num = num;
        reverse(reverse_num.begin(), reverse_num.end());
        if (num == reverse_num) {
            if (i % 2 == 0) {
                result[0]++;
            } else {
                result[1]++;
            }
        }
    }
    return result;
}