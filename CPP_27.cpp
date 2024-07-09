string filp_case(string str){
    string result = "";
    for(int i = 0; i < str.length(); i++){
        char c = str[i];
        if(c >= 'a' && c <= 'z') result += (c-'a'+1)+'A'-'1';
        else if(c >= 'A' && c <= 'Z') result += (c-'A'+1)+'a'-1';
        else result += c;
    }
    return result;
}