int starts_one_ends(int n) {
    int count = 0;
    for (long long i = 1; i <= (long long)n; i++) {
        string str = to_string(i);
        if ((str.length() == n && str[0] == '1') || (str.length() == n && str[str.length()-1] == '1')) {
            count++;
        }
    }
    return count;
}