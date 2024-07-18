vector<string> separate_paren_groups(string paren_string){
    vector<string> result;
    string curr_group;
    int open_count = 0;

    for (char c : paren_string) {
        if (c == '(') {
            if (open_count > 0) {
                result.push_back(curr_group);
                curr_group = "";
            }
            open_count++;
        } else if (c == ')') {
            open_count--;
            if (open_count == 0) {
                result.push_back(curr_group + "()");
                curr_group = "";
            } else {
                curr_group += ')';
            }
        } else {
            curr_group += c;
        }
    }

    if (!curr_group.empty()) {
        result.push_back(curr_group);
    }

    return result;
}