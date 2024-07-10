string anti_shuffle(string s){
    string result = "";
    for(int i=0; i<s.length(); i++){
        if(s[i] == ' '){
            result += ' ';
        }else{
            string word = "";
            for(int j=i; j<=s.find(' ', i); j++){
                word += s[j];
                i = j;
                break;
            }
            sort(word.begin(), word.end());
            result += word;
        }
    }
    return result;
}