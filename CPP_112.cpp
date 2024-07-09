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
        if (!found)
            res += ch;
    }
    
    vector<string> result;
    result.push_back(res);
    string temp = res;
    reverse(temp.begin(), temp.end());
    if (res == temp)
        result.push_back("True");
    else
        result.push_back("False");
    
    bool issame(string a, string b) {
        return a == reverse(b);
    }
    
    return result;
}