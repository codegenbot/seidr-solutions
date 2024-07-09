string flip_case(string str){
    string result = "";
    for(int i=0; i<str.length(); i++){
        char ch = str[i];
        if(ch>=97&&ch<=122) // lowercase letters (a-z)
            result += toupper(ch);
        else if(ch>=65&&ch<=90) // uppercase letters (A-Z)
            result += tolower(ch);
        else
            result+=ch;
    }
    return result;
}