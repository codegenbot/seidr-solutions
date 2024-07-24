```
vector<string> issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        throw runtime_error("Input vectors have different sizes!");
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            throw runtime_error("Strings in the input vectors are not the same!");
        }
    }
    return a;
}

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    string temp = "";
    for (char ch : s) {
        bool found = false;
        for (char cc : c) {
            if (ch == cc) {
                found = true;
                break;
            }
        }
        if (!found) {
            temp += ch;
        }
    }
    result.push_back(temp);
    string revTemp = temp;
    reverse(revTemp.begin(), revTemp.end());
    if (temp == revTemp) {
        result.push_back("True");
    } else {
        result.push_back("False");
    }
    return result;
}