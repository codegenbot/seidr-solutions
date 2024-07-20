Here is the completed code:

vector<string> reverse_delete(string s, string c) {
    vector<char> sc(c.begin(), c.end());
    string result = "";
    for (char ch : s) {
        bool found = false;
        for (char cch : sc) {
            if (cch == ch) {
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
    return {result, (revResult == result ? "True" : "False")};
}