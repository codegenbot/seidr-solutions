vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    int count = 0;
    string temp = "";
    
    for (char c : paren_string) {
        if (c == '(') {
            count++;
            if (count > 1) {
                temp += c;
            }
        } else if (c == ')') {
            count--;
            if (count > 0) {
                temp += c;
            } else if (count == 0) {
                result.push_back(temp);
                temp = "";
            }
        }
    }
    
    return result;
}