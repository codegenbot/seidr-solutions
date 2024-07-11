Here is the completed code:

vector<string> reverse_delete(string s, string c) {
    string t = "";
    for (char x : s) {
        bool found = false;
        for (char y : c) {
            if (x == y) {
                found = true;
                break;
            }
        }
        if (!found) {
            t += x;
        }
    }
    string rev = t;
    reverse(rev.begin(), rev.end());
    vector<string> result;
    result.push_back(t);
    if (t == rev) {
        result.push_back("True");
    } else {
        result.push_back("False");
    }
    return result;
}