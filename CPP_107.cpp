vector<int> even_odd_palindrome(int n) {
    vector<int> result(2);
    for (int i = 1; i <= n; i++) {
        string s = to_string(i);
        bool isPal = true;
        for (int j = 0; j < s.length() / 2; j++) {
            if (s[j] != s[s.length() - j - 1]) {
                isPal = false;
                break;
            }
        }
        if (isPal) {
            if (i % 2 == 0)
                result[0]++;
            else
                result[1]++;
        }
    }
    return result;
}