Here is the solution:

vector<string> reverse_delete(string s, string c) {
    string result = "";
    for (char x : s) {
        bool found = false;
        for (char y : c) {
            if (x == y) {
                found = true;
                break;
            }
        }
        if (!found) {
            result += x;
        }
    }
    string rev = result;
    reverse(rev.begin(), rev.end());
    vector<string> res;
    res.push_back(result);
    res.push_back((result == rev) ? "True" : "False");
    return res;