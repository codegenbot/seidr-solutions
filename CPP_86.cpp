string anti_shuffle(string s){
    string result = "";
    for(int i=0; i<s.length(); i++){
        if(s[i] == ' '){
            result += ' ';
            continue;
        }
        char temp = s[i];
        for(char c : s.substr(i+1)){
            if(c <= temp){
                temp = c;
            }
        }
        while(temp != s[i]){
            result += temp;
            i++;
            temp--;
        }
        result += s[i];
    }
    return result;
}