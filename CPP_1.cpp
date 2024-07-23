vector<string> groups;
    string current_group;
    int balance = 0;
    
    for(char c : paren_string) {
        if(c == '(') {
            balance++;
            if(balance == 1) {
                if(!current_group.empty()) {
                    groups.push_back(current_group);
                    current_group.clear();
                }
            }
        } else if(c == ')') {
            balance--;
            if(balance == 0) {
                groups.push_back(current_group + "()");
                current_group.clear();
            }
        } else {
            if(balance > 0) {
                current_group += c;
            }
        }
    }
    
    if(!current_group.empty()) {
        groups.push_back(current_group);
    }
    
    return groups;
}