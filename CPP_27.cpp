string flip_case(string str){
    string result = "";
    for(char c : str){
        if(c >= 'a' && c <= 'z')
            result += (char)(c - ('a' - 'A'));
        else if(c >= 'A' && c <= 'Z')
            result += (char)(c - ('A' - 'a'));
        else
            result += c;
    }
    return result;
}