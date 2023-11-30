vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    int count = 0;
    string group = "";
    
    for (char c : paren_string) {
        if (c == '(') {
            count++;
            group += c;
        } else if (c == ')') {
            count--;
            group += c;
            
            if (count == 0) {
                result.push_back(group);
                group = "";
            }
        }
    }
    
    return result;
}