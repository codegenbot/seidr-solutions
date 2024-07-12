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
    string rev = result;
    reverse(rev.begin(), rev.end());
    vector<string> res = {result, (result == rev ? "True" : "False")};
    return res;
}