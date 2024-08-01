string flip_case(string str){
    string result = "";
    for(int i=0; i<str.length(); i++){
        char ch = str[i];
        if(ch >= 'a' && ch <= 'z') ch -= 32;
        else if(ch >= 'A' && ch <= 'Z') ch += 32;
        result += ch;
    }
    return result;
}