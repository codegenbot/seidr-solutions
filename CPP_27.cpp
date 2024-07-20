char c;
string filp_case(string str){
    for(int i = 0; i < str.length(); i++){
        c = str[i];
        if(c >= 'a' && c <= 'z') // lowercase character
            c -= ('a' - 'A');
        else if(c >= 'A' && c <= 'Z') // uppercase character
            c += ('a' - 'A');
        str[i] = c;
    }
    return str;
}