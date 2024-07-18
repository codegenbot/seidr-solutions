vector<string> result;
    string current_group = "";
    int open_brackets = 0;

    for (char c : paren_string) {
        if (c == '(') {
            open_brackets++;
            if (open_brackets > 1) {
                current_group += c;
            }
        } else if (c == ')') {
            open_brackets--;
            if (open_brackets == 0) {
                result.push_back(current_group);
                current_group = "";
            } else {
                current_group += c;
            }
        } else if (open_brackets > 0) {
            current_group += c;
        }
    }

    return result;
}