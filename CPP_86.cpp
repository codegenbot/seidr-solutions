string anti_shuffle(string s){
    string result = "";
    for(int i=0; i<s.length(); i++){
        if(s[i] == ' '){
            result += ' ';
            continue;
        }
        string word = "";
        for(int j=i; j<=s.find(' ',i); j++){
            word += s[j];
        }
        i = s.find(' ', i);
        string temp = word;
        sort(temp.begin(), temp.end());
        result += temp;
    }
    return result;
}