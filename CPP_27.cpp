string flip_case(string str){
    string result = "";
    for(char c : str){
        if(c >= 'a' && c <= 'z') {
            result += (char)(c - 32);
        } else if(c >= 'A' && c <= 'Z'){
            result += (char)(c + 32);
        } else{
            result += c;
        }
    }
    return result;
}