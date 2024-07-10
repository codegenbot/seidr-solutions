string filp_case(string str){
    string result = "";
    for(int i=0; i<str.length(); i++){
        char c = str[i];
        if(c>=97 && c<=122){ // lowercase letters
            result += toupper(c);
        }else{
            result += tolower(c); // uppercase letters
        }
    }
    return result;
}