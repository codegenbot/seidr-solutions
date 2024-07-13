string flip_case(string str){
    string result = "";
    for(int i=0; i<str.length(); i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            result += toupper(str[i]);
        }else if(str[i] >= 'A' && str[i] <= 'Z'){
            result += tolower(str[i]);
        } else {
            result += str[i];
        }
    }
    return result;
}