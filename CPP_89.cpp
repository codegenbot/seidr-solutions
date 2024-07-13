string encrypt(string s){
    string result = "";
    for(int i=0; i<s.size(); i++){
        if(s[i] >= 'a' && s[i] <= 'c'){
            result += (char)(s[i]+8);
        } else if(s[i] >= 'd' && s[i] <= 'f'){
            result += (char)(s[i]+6);
        } else if(s[i] >= 'g' && s[i] <= 'i'){
            result += (char)(s[i]+4);
        } else if(s[i] >= 'j' && s[i] <= 'l'){
            result += (char)(s[i]+2);
        } else if(s[i] >= 'm' && s[i] <= 'z'){
            int temp = (int)s[i];
            temp = (temp+16)%26;
            char c = (char)('a'+temp);
            result += c;
        }
    }
    return result;
}