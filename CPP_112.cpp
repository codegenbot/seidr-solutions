string result = "";
    for (char ch : s) {
        if (c.find(ch) == string::npos) {
            result += ch;
        }
    }
    string palin = result;
    reverse(result.begin(), result.end());
    return {result, palin == result ? "True" : "False"};
}