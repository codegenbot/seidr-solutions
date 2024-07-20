string flip_case(string str){
    string result = "";
    for(int i=0; i<str.length(); i++){
        char ch = str[i];
        if(ch >= 'a' && ch <= 'z')
            result += (char)(ch - ('a' - 'A'));
        else if(ch >= 'A' && ch <= 'Z')
            result += (char)(ch - ('A' - 'a'));
        else
            result += ch;
    }
    return result;
}