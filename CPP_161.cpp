int solve(string s) {
    string result = "";
    string res = return_result(s);
    if (res.empty()) {
        return s;
    } else {
        for (char c : res) {
            result += c;
        }
        return result;
    }
}