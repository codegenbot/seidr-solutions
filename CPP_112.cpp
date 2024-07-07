Here is the completed code:

vector<string> reverse_delete(string s, string c) {
    vector<char> sc(c.begin(), c.end());
    string result = "";
    for (char ch : s) {
        bool found = false;
        for (char cc : sc) {
            if (ch == cc) {
                found = true;
                break;
            }
        }
        if (!found) {
            result += ch;
        }
    }
    string revResult = result;
    reverse(revResult.begin(), revResult.end());
    vector<string> res;
    res.push_back(result);
    res.push_back((result == revResult) ? "True" : "False");
    return res;
}