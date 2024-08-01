string flipCase(string s){
    string result = "";
    for(int i=0; i<s.length(); i++){
        if(s[i] >= 'a' && s[i] <= 'z')
            result += toupper(s[i]);
        else if(s[i] >= 'A' && s[i] <= 'Z')
            result += tolower(s[i]);
        else
            result += s[i];
    }
    return result;
}