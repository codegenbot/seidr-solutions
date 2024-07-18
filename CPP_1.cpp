vector<string> result;
    string group;
    int count = 0;
    
    for (char c : paren_string) {
        if (c == '(') {
            count++;
            group += c;
        } else if (c == ')') {
            count--;
            group += c;
            if (count == 0) {
                result.push_back(group);
                group = "";
            }
        }
    }
    
    return result;
}