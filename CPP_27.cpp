string flip_case(string str){
    string result = "";
    for(int i=0; i<str.length(); i++){
        char c = str[i];
        if(c >= 'a' && c <= 'z') // lowercase letter
            result += toupper(c);
        else if(c >= 'A' && c <= 'Z') // uppercase letter
            result += tolower(c);
        else 
            result += c; // non-alphabetic character, just copy it
    }
    return result;
}