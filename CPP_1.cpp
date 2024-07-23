vector<string> groups;
    int start = 0;
    int end = 0;
    int count = 0;
    
    for (int i = 0; i < paren_string.size(); ++i) {
        if (paren_string[i] == '(') {
            if (count == 0) {
                start = i;
            }
            count++;
        } else if (paren_string[i] == ')') {
            count--;
            if (count == 0) {
                end = i;
                groups.push_back(paren_string.substr(start, end - start + 1));
            }
        }
    }
    
    return groups;
}