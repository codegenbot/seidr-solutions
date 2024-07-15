vector<string> result;
    string temp;
    int count = 0;

    for (char c : paren_string) {
        if (c == '(') {
            if (count) temp += c;
            count++;
        } else if (c == ')') {
            count--;
            if (count) temp += c;
            if (count == 0) {
                result.push_back(temp);
                temp.clear();
            }
        }
    }

    return result;
}