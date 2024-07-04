string result;
    for(char c : text) {
        if(!strchr("aeiouAEIOU", c)) {
            result += c;
        }
    }
    return result;
}