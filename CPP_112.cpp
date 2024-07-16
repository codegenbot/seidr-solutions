string result = "";
    for (char ch : s) {
        if (c.find(ch) == string::npos) {
            result += ch;
        }
    }
    string result_str = result;
    string check = (result_str == string(result_str.rbegin(), result_str.rend())) ? "True" : "False";
    return {result_str, check};
}