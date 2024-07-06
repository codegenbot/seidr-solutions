string flip_case(string str){
    string result = "";
    for(char c : str){
        if(c >= 'a' && c <= 'z')
            result += (char)(c - ('a' - 'A'));
        else
            result += c;
    }
    return result;
}