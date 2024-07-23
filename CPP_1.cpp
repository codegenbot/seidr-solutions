vector<string> groups;
    string current_group;
    int open_paren_count = 0;
    
    for (char c : paren_string) {
        if (c == '(') {
            if (open_paren_count > 0) {
                current_group += c;
            }
            open_paren_count++;
        } else if (c == ')') {
            open_paren_count--;
            if (open_paren_count > 0) {
                current_group += c;
            } else {
                groups.push_back(current_group);
                current_group = "";
            }
        }
    }
    
    return groups;
}