Here is the completed code:

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
    vector<string> res;
    res.push_back(result);
    res.push_back((result == reverse(result)) ? "True" : "False");
    return res;
}