string flip_case(string str){
    string result = "";
    for(int i=0; i<str.length(); i++){
        char c = str[i];
        if(c>=97 && c<=122) // lowercase character
            result += (char)(c-32); // convert to uppercase
        else if(c>=65 && c<=90) // uppercase character
            result += (char)(c+32); // convert to lowercase
        else
            result += c; // non-alphabetic characters remain the same
    }
    return result;
}