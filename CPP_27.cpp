string flip_case(string str){
    string result = "";
    for(char c : str){
        if(isalpha(c)){
            c = (islower(c)) ? toupper(c) : tolower(c);
        }
        result += c;
    }
    return result;
}