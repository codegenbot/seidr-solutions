string result = "";
    for(int i=0; i<s.length(); i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            result += (char)(((s[i]-'a'+2)*2)%26 + 'a');
        } else {
            result += s[i];
        }
    }
    return result;
}