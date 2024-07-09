vector<string> reverse_delete(string s, string c) {
    string res = "";
    for (char ch : s) {
        bool found = false;
        for (char cc : c) {
            if (ch == cc) {
                found = true;
                break;
            }
        }
        if (!found) {
            res += ch;
        }
    }
    vector<string> result(2);
    result[0] = res;
    result[1] = (res == string(res.rbegin(), res.rend())) ? "True" : "False";
    return result;
}