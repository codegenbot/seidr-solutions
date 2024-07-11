string anti_shuffle(const string& s){
    string result = "";
    string word = "";
    for(char c : s){
        if(c == ' '){
            sort(word.rbegin(), word.rend());
            result += word + " ";
            word = "";
        } else {
            word += c;
        }
    }
    sort(word.rbegin(), word.rend());
    result += word;
    return result;
}