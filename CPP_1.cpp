vector<string> result;
    string current_group;
    int count = 0;

    for (char c : paren_string) {
        if (c == '(') {
            count++;
            if (count > 1) {
                current_group += '(';
            }
        } else if (c == ')') {
            count--;
            if (count > 0) {
                current_group += ')';
            }
            if (count == 0) {
                result.push_back(current_group);
                current_group.clear();
            }
        }
    }
    
    return result;
}