vector<string> result;
    string temp;
    int count = 0;
    for (char c : paren_string) {
        if (c == '(') {
            if (count > 0) {
                temp.push_back(c);
            }
            count++;
        } else if (c == ')') {
            count--;
            if (count > 0) {
                temp.push_back(c);
            } else if (count == 0) {
                result.push_back(temp);
                temp = "";
            }
        }
    }
    return result;
}