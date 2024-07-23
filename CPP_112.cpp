string result = "";
    for (char ch : s) {
        if (c.find(ch) == string::npos) {
            result += ch;
        }
    }
    string result_reverse = result;
    reverse(result_reverse.begin(), result_reverse.end());
    bool is_palindrome = (result == result_reverse);
    return {result, is_palindrome ? "True" : "False"};
}