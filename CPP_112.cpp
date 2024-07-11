Here is the solution:

vector<string> reverse_delete(string s, string c) {
    vector<char> temp(s.begin(), s.end());
    
    for (char& i : temp) {
        bool found = false;
        for (char j : c) {
            if (i == j) {
                found = true;
                break;
            }
        }
        if (!found) {
            s.erase(remove(s.begin(), s.end(), i), s.end());
        }
    }
    
    string result = s;
    reverse(result.begin(), result.end());
    
    vector<string> res;
    res.push_back(result);
    res.push_back(to_string(result == s));
    return res;
}