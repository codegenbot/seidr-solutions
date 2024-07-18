vector<string> separate_paren_groups(string paren_string){
    vector<string> result;
    int count = 0;
    string current_group = "";
    
    for (char c : paren_string) {
        if (c == '(') {
            count++;
            if (count > 1) {
                current_group += c;
            }
        } else if (c == ')') {
            count--;
            if (count == 0) {
                result.push_back(current_group);
                current_group = "";
            } else {
                current_group += c;
            }
        }
    }
    
    return result;
}