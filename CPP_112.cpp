Here is the completed code:

vector<string> reverse_delete(string s, string c) {
    vector<char> s_vector(s.begin(), s.end());
    for (char& ch : s_vector) {
        bool found = false;
        for (char cch : c) {
            if (ch == cch) {
                found = true;
                break;
            }
        }
        if (!found) {
            s.erase(remove(s.begin(), s.end(), ch), s.end());
        }
    }
    string result = s;
    reverse(result.begin(), result.end());
    vector<string> res({result, (result == s ? "True" : "False")});
    return res;
}