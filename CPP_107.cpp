Here is the solution:

vector<int> even_odd_palindrome(int n) {
    int even_count = 0, odd_count = 0;
    for (int i = 1; i <= n; i++) {
        if (is_palindrome(i)) {
            if (i % 2 == 0)
                even_count++;
            else
                odd_count++;
        }
    }
    return {even_count, odd_count};
}

bool is_palindrome(int num) {
    string str = to_string(num);
    for (int i = 0; i < str.length(); i++) {
        if (str[i] != str[str.length() - 1 - i])
            return false;
    }
    return true;
}