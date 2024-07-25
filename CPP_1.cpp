vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string temp;
    bool inside_parentheses = false;
    
    for (char c : paren_string) {
        if (c == '(') {
            inside_parentheses = true;
            temp += c;
        } else if (c == ')' && inside_parentheses) {
            temp += c;
            result.push_back(temp);
            temp = "";
            inside_parentheses = false;
        } else if (inside_parentheses) {
            temp += c;
        }
    }
    
    return result;
}