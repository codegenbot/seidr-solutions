string anti_shuffle(string s) {
    string result = "";
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == ' ') {
            result += " ";
            continue;
        }
        string temp = "";
        bool first = true;
        for(int j = i; j < s.size(); j++) {
            if(first) {
                first = false;
                temp += s[j];
            } else {
                if(s[j] <= temp[0]) {
                    temp = temp + s[j];
                }
                else break;
            }
        }
        result += temp;
    }
    return result;
}