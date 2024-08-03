vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    int current_group_start = 0;
    int current_group_end = 0;
    int open_brace_count = 0;

    for (int i = 0; i < paren_string.size(); i++) {
        if (paren_string[i] == '(') {
            open_brace_count++;
        } else if (paren_string[i] == ')') {
            open_brace_count--;
            current_group_end = i;
        }

        if (open_brace_count == 0) {
            result.push_back(paren_string.substr(current_group_start, current_group_end - current_group_start + 1));
            current_group_start = i + 1;
            current_group_end = i;
        }
    }

    return result;
}