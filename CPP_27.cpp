string flip_case(string str){
    string result = "";
    for(int i=0; i<str.length(); i++){
        char c = str[i];
        if(c>=97 && c<=122)  // lowercase letters
            result += toupper(c);
        else if(c>=65 && c<=90)  // uppercase letters
            result += tolower(c);
        else  // non-alphabet characters
            result += c;
    }
    return result;
}