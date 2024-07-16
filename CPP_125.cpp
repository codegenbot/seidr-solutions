vector<string> result;
    string word = "";
    bool hasSpace = false;
    bool hasComma = false;

    for(char c : txt) {
        if(c == ' ') {
            hasSpace = true;
            if(!word.empty()) {
                result.push_back(word);
                word = "";
            }
        } else if(c == ',') {
            hasComma = true;
            if(!word.empty()) {
                result.push_back(word);
                word = "";
            }
        } else {
            word += c;
        }
    }

    if(!word.empty()) {
        result.push_back(word);
    }

    if(result.empty()) {
        if(hasSpace) {
            result.push_back(to_string(countOddLowercaseLetters(txt)));
        } else if(hasComma) {
            result.push_back(to_string(countOddLowercaseLetters(txt)));
        } else {
            result.push_back(to_string(countOddLowercaseLetters(txt)));
        }
    }

    return result;
}

int countOddLowercaseLetters(string txt) {
    int oddCount = 0;
    for(char c : txt) {
        if(islower(c)) {
            int ord = c - 'a';
            if(ord % 2 != 0) {
                oddCount++;
            }
        }
    }
    return oddCount;
}