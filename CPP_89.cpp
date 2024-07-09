string encrypted = "";
    for(int i = 0; i < s.size(); i++){
        if(isalpha(s[i])){
            int shift = (s[i] - 'a') + 2 * 2;
            if(isupper(s[i])){
                shift = (s[i] - 'A') + 2 * 2;
                encrypted += (char)('A' + (shift % 26));
            } else{
                encrypted += (char)('a' + (shift % 26));
            }
        } else{
            encrypted += s[i];
        }
    }
    return encrypted;
}