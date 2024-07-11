string result = "";
    for (char ch : s) {
        if (c.find(ch) == string::npos) {
            result += ch;
        }
    }
    string result_copy = result;
    reverse(result_copy.begin(), result_copy.end());
    return {result, result == result_copy ? "True" : "False"};
}