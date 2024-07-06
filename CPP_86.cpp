string anti_shuffle(string s){
    string result = "";
    for(int i=0; i<s.length(); i++){
        if(s[i] == ' '){
            result += ' ';
        }else{
            string word = "";
            for(int j=i; j<s.length() && s[j] != ' '; j++){
                word += s[j];
                int temp = 0;
                for(int k=0; k<word.length(); k++){
                    if(temp <= word[k]){
                        temp = word[k];
                    }
                }
                result += (char)temp;
            }
            i = j;
        }
    }
    return result;
}