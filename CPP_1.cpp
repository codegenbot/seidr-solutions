vector<string> result;
    string temp;
    int count = 0;
    
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
            } else {
                result.push_back(temp);
                temp = "";
            }
        } else if (count > 0) {
            temp += c;
        }
    }
    
    return result;
}