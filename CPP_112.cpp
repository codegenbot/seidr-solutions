for (char ch : c) {
        s.erase(remove(s.begin(), s.end(), ch), s.end());
    }
    string result = s;
    string result_rev = result;
    reverse(result_rev.begin(), result_rev.end());
    bool is_palindrome = (result == result_rev);
    return {result, (is_palindrome ? "True" : "False")};
}