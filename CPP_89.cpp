string result = "";
    for(int i=0; i<s.length(); i++){
        if(isalpha(s[i])){
            char c = s[i] + 2*2;
            if(islower(s[i])){
                if(c > 'z'){
                    c = 'a' + (c - 'z' - 1);
                }
            } else {
                if(c > 'Z'){
                    c = 'A' + (c - 'Z' - 1);
                }
            }
            result += c;
        } else {
            result += s[i];
        }
    }
    return result;
}