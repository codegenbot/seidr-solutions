Here is the completed code:

vector<string> reverse_delete(string s, string c) {
    string t = "";
    for (char& ch : s) {
        bool found = false;
        for (char& cc : c) {
            if (cc == ch) {
                found = true;
                break;
            }
        }
        if (!found)
            t += ch;
    }
    
    vector<string> result;
    result.push_back(t);
    
    string rev = t;
    reverse(rev.begin(), rev.end());
    
    if (t == rev)
        result.push_back("True");
    else
        result.push_back("False");
    
    return result;
}