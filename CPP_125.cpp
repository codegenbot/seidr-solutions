vector<string> result;
    int oddCount = 0;
    for(char c : txt) {
        if(islower(c)) {
            int index = c - 'a';
            if(index % 2 == 1) {
                oddCount++;
            }
        }
    }
    if(txt.find(' ') != string::npos) {
        string word = "";
        for(char c : txt) {
            if(c == ' ') {
                result.push_back(word);
                word = "";
            } else {
                word += c;
            }
        }
        result.push_back(word);
    } else if(txt.find(',') != string::npos) {
        string word = "";
        for(char c : txt) {
            if(c == ',') {
                result.push_back(word);
                word = "";
            } else {
                word += c;
            }
        }
        result.push_back(word);
    } else {
        result.push_back(to_string(oddCount));
    }
    return result;
}