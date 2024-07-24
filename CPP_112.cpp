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
    string revResult = result;
    reverse(revResult.begin(), revResult.end());
    vector<string> res;
    res.push_back(result);
    if (result == revResult) {
        res.push_back("True");
    } else {
        res.push_back("False");
    }
    return res;
}