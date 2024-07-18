vector<string> separate_paren_groups(string paren_string){
    vector<string> result;
    string curr_group;
    int open_braces = 0;

    for (char c : paren_string) {
        if (c == '(') {
            open_braces++;
            if (open_braces > 1) {
                curr_group += c;
            }
        } else if (c == ')') {
            open_braces--;
            if (open_braces == 0) {
                result.push_back(curr_group);
                curr_group.clear();
            } else {
                curr_group += c;
            }
        }
    }

    return result;
}