vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string current_group;
    int count = 0;

    for (char& c : paren_string) {
        if (c == '(') {
            if (count > 0) {
                current_group.push_back(c);
            }
            count++;
        } else if (c == ')') {
            count--;
            if (count > 0) {
                current_group.push_back(c);
            } else if (count == 0) {
                result.push_back(current_group);
                current_group.clear();
            }
        }
    }

    return result;
}