vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string group;
    int count = 0;
    
    for (char c : paren_string) {
        if (c == ' ') {
            continue;
        }
        
        group += c;
        
        if (c == '(') {
            count++;
        } else if (c == ')') {
            count--;
        }
        
        if (count == 0) {
            result.push_back(group);
            group = "";
        }
    }
    
    return result;
}