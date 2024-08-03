Here is the completed code:

vector<int> even_odd_palindrome(int n) {
    int even = 0, odd = 0;
    for (int i = 1; i <= n; ++i) {
        string str = to_string(i);
        bool is_palindrome = true;
        for (int j = 0; j < str.length() / 2; ++j) {
            if (str[j] != str[str.length() - 1 - j]) {
                is_palindrome = false;
                break;
            }
        }
        if (is_palindrome && i % 2 == 0)
            even++;
        else if (is_palindrome && i % 2 != 0)
            odd++;
    }
    return {even, odd};
}