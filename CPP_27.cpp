string flip_case(string str){
    string result = "";
    for(int i=0; i<str.length(); i++){
        char c = str[i];
        if(c>=97 && c<=122) // lowercase
            c -= 32;
        else if(c>=65 && c<=90) // uppercase
            c += 32;
        result += c;
    }
    return result;
}