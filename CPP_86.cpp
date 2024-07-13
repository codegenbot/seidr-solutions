string anti_shuffle(string s){
    string result = "";
    size_t pos = 0;
    while((pos = s.find(' ')) != string::npos){
        string word = s.substr(0, pos);
        string new_word = "";
        for(char c : word) {
            new_word += (char)tolower(c);
        }
        result += new_word + " ";
        s.erase(0, pos+1);
    }
    if(s.length() > 0) {
        string last_word = s;
        string new_last_word = "";
        for(char c : last_word) {
            new_last_word += (char)tolower(c);
        }
        result += new_last_word;
    } else {
        result = s;
    }
    return result;
}