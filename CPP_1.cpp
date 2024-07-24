vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string current_group;
    int balance = 0;

    for (char ch : paren_string) {
        if (ch == '(') {
            if (balance > 0) {
                current_group.push_back(ch);
            }
            balance++;
        } else if (ch == ')') {
            balance--;
            if (balance > 0) {
                current_group.push_back(ch);
            }
            if (balance == 0) {
                result.push_back(current_group);
                current_group.clear();
            }
        }
    }
    
    return result;
}