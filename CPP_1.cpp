vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string current_group = "";

    for (char c : paren_string) {
        if (c == '(') {
            current_group += c;
        } else if (c == ')') {
            current_group += c;
            if (!current_group.empty()) {
                bool is_balanced = true;
                int open_count = 0, close_count = 0;
                for (int i = 0; i < current_group.size(); ++i) {
                    if (current_group[i] == '(') {
                        ++open_count;
                    } else if (current_group[i] == ')') {
                        ++close_count;
                        if (open_count == close_count) {
                            break;
                        }
                    }
                }
                if (open_count == close_count) {
                    result.push_back(current_group);
                    current_group = "";
                } else {
                    is_balanced = false;
                }
                if (!is_balanced) {
                    for (int i = 0; i < current_group.size(); ++i) {
                        if (current_group[i] == '(') {
                            --open_count;
                        } else if (current_group[i] == ')') {
                            --close_count;
                        }
                        if (open_count > 0 && close_count > 0 && open_count == close_count) {
                            current_group = current_group.substr(0, i);
                            break;
                        }
                    }
                }
            }
        } else {
            current_group += c;
        }
    }

    return result;
}