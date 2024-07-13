string flip_case(string str){
    string result = "";
    for(int i=0; i<str.length(); i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            result += (char)(str[i] - 32);
        }else if(str[i] >= 'A' && str[i] <= 'Z'){
            result += (char)(str[i] + 32);
        } else {
            result += str[i];
        }
    }
    return result;
}