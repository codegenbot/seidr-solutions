string anti_shuffle(string s){
    string result = "";
    for(int i = 0; i < s.length(); i++){
        if(s[i] == ' '){
            result += ' ';
        }else{
            char temp = s[i];
            for(int j = 0; j < s.length() - i - 1; j++){
                if(temp > s[i + j + 1]){
                    swap(temp, s[i + j + 1]);
                }
            }
            result += temp;
        }
    }
    return result;
}