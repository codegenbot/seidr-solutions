Here is the solution:

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    string temp = "";
    
    for (int i = 0; i < s.length(); i++) {
        bool found = false;
        for (int j = 0; j < c.length(); j++) {
            if (s[i] == c[j]) {
                found = true;
                break;
            }
        }
        
        if (!found) {
            temp += s[i];
        }
    }
    
    string check = temp;
    reverse(check.begin(), check.end());
    
    result.push_back(temp);
    result.push_back((check == temp) ? "True" : "False");
    
    return result;
}