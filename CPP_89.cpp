for(int i=0; i<s.length(); i++){
        if(isalpha(s[i])){
            if(islower(s[i])){
                s[i] = 'a' + (s[i]-'a' + 2 * 2) % 26;
            } else {
                s[i] = 'A' + (s[i]-'A' + 2 * 2) % 26;
            }
        }
    }
    return s;
}