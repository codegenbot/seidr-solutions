vector<string> result;
    string curr_group;
    int balance = 0;
    
    for (char c : paren_string) {
        if (c == '(') {
            balance++;
            if (balance > 1) {
                curr_group += c;
            }
        } else if (c == ')') {
            balance--;
            if (balance > 0) {
                curr_group += c;
            } else if (balance == 0) {
                result.push_back(curr_group);
                curr_group = "";
            }
        }
    }
    
    return result;
}