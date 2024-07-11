string result = "";
    for (char ch : s) {
        if (c.find(ch) == string::npos) {
            result += ch;
        }
    }
    string reverse_result = result;
    reverse(reverse_result.begin(), reverse_result.end());
    vector<string> output;
    output.push_back(result);
    output.push_back(result == reverse_result ? "True" : "False");
    return output;
}