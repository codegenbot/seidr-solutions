int starts_one_ends(int n) {
    int count = 0;
    for (long long i = 1; i <= (long long)n; i++) {
        string str = to_string(i);
        if ((str[0] == '1' || str[str.size()-1] == '1') && str.size() == n) {
            count++;
        }
    }
    return count;
}