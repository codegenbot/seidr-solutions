vector<int> even_odd_palindrome(int n){
    vector<int> res(2, 0);
    for (int i = 1; i <= n; ++i) {
        string s = to_string(i);
        string rev(s.rbegin(), s.rend());
        if (s == rev) {
            if (i % 2 == 0) {
                res[0]++;
            } else {
                res[1]++;
            }
        }
    }
    return res;
}