vector<string> reverse_delete(string s, string c) {
    vector<string> res;
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
    res.push_back(result);
    string rev = result;
    reverse(rev.begin(), rev.end());
    res.push_back((result == rev ? "True" : "False"));
    return res;
}