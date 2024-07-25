vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string current_group;
    int count = 0;
    
    for (char c : paren_string) {
        if (c == '(') {
            count++;
        } else if (c == ')') {
            count--;
        }
        
        current_group += c;
        
        if (count == 0) {
            result.push_back(current_group);
            current_group = "";
        }
    }
    
    return result;
}