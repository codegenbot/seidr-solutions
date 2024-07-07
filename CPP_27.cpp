string filp_case(string str){
    string result = "";
    for(int i=0; i<str.length(); i++){
        char c = str[i];
        if(c>=97 && c<=122) // lowercase character
            c -= 32;
        else if(c>=65 && c<=90) // uppercase character
            c += 32;
        result += c;
    }
    return result;
}