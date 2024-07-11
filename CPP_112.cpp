string result = "";
    for (char ch : s) {
        if (c.find(ch) == string::npos) {
            result += ch;
        }
    }

    string result_rev = result;
    reverse(result_rev.begin(), result_rev.end());

    return {result, result == result_rev ? "True" : "False"};
}