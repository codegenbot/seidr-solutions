string result;
    int count = 0;
    for(char c : text) {
        if(c == ' ') {
            if(count < 2) {
                result.push_back('_');
            } else {
                if(result.back() != '-') {
                    result.push_back('-');
                }
            }
            count++;
        } else {
            result.push_back(c);
            count = 0;
        }
    }
    return result;
}