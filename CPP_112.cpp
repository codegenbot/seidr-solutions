string result = "";
    for (char ch : s) {
        if (c.find(ch) == string::npos) {
            result += ch;
        }
    }
    string palindrome_check = (result == string(result.rbegin(), result.rend())) ? "True" : "False";
    return {result, palindrome_check};
}