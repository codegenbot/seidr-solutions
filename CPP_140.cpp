string result;
    int count = 0;
    for (char& c : text) {
        if (c == ' ') {
            count++;
            if (count > 2) {
                result.pop_back();
                result.pop_back();
                result.push_back('-');
                count = 1;
            } else {
                result.push_back('_');
            }
        } else {
            result.push_back(c);
            count = 0;
        }
    }
    return result;
}