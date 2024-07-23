string result = "";
    for (char ch : s) {
        if (c.find(ch) == string::npos) {
            result += ch;
        }
    }
    string palindrome = result;
    reverse(palindrome.begin(), palindrome.end());
    return {result, result == palindrome ? "True" : "False"};
}