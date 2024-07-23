Here is the completed code:

vector<string> reverse_delete(string s, string c) {
    string result = "";
    for (char c_s : s) {
        bool found = false;
        for (char c_c : c) {
            if (c_s == c_c) {
                found = true;
                break;
            }
        }
        if (!found) {
            result += c_s;
        }
    }
    string temp = result;
    reverse(temp.begin(), temp.end());
    vector<string> res;
    res.push_back(result);
    if (result == temp) {
        res.push_back("True");
    } else {
        res.push_back("False");
    }
    return res;
}