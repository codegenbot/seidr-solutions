string anti_shuffle(string s){
    string result = "";
    for(int i=0; i<s.length(); i++){
        if(s[i] == ' '){
            result += ' ';
            continue;
        }
        string word = "";
        bool firstChar = true;
        for(int j=i; j<s.length() && s[j] != ' '; j++){
            if(firstChar) {
                firstChar = false;
                word += s[j];
            } else {
                word += s[j];
                int asciiValue = (int)s[j];
                bool found = false;
                for(int k=0; k<word.length(); k++){
                    if((int)word[k] >= asciiValue){
                        word = word.substr(0, k) + s[j] + word.substr(k);
                        found = true;
                        break;
                    }
                }
                if(!found) {
                    word += s[j];
                }
            }
        }
        i = j - 1;
        result += word;
    }
    return result;
}