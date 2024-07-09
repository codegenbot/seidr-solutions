vector<int> even_odd_palindrome(int n) {
    vector<int> result(2);
    for (int i = 1; i <= n; ++i) {
        string str = to_string(i);
        bool is_even = (i % 2 == 0);
        if (str == reverse(str)) {
            result[is_even] += 1;
        }
    }
    return result;
}