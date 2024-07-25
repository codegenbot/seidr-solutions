string anti_shuffle(string s){
    string result = "";
    for(int i = 0; i < s.length(); i++){
        if(s[i] == ' '){
            result += ' ';
            continue;
        }
        string temp = "";
        for(int j = i; j <= s.length() - 1 && s[j] != ' '; j++){
            temp += s[j];
        }
        sort(temp.begin(), temp.end());
        result += temp;
        i = j - 1;
    }
    return result;
}