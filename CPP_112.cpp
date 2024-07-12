vector<string> reverse_delete(string s, string c) {
    string result = "";
    for (char ch : s) {
        bool found = false;
        for (char cc : c) {
            if (ch == cc) {
                found = true;
                break;
            }
        }
        if (!found) {
            result += ch;
        }
    }
    reverse(result.begin(), result.end());
    vector<string> res = {result, (result.empty() ? "True" : "False")};
    return res;
}