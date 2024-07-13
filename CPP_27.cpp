string filp_case(string str){
    string result = "";
    for(int i=0; i<str.length(); i++){
        char c = str[i];
        if(c >= 'a' && c <= 'z') // lowercase character
            result += toupper(c);
        else if(c >= 'A' && c <= 'Z') // uppercase character
            result += tolower(c);
        else 
            result += c; // special characters remain the same
    }
    return result;
}