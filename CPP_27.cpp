string flip_case(string str){
    string result = "";
    for(int i=0; i<str.length(); i++){
        if(isalpha(str[i])){
            char c = (islower(str[i])) ? toupper(str[i]) : tolower(str[i]);
            result += c;
        }
        else{
            result += str[i];
        }
    }
    return result;
}