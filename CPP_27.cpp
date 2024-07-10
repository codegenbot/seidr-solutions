string flip_case(string str){
    string result = "";
    for(int i=0; i<str.length(); i++){
        char c = str[i];
        if(c >= 'a' && c <= 'z'){
            result += (c - ('a' - 'A')); // convert lowercase to uppercase
        } else if(c >= 'A' && c <= 'Z') {
            result += (c - ('A' - 'a')); // convert uppercase to lowercase
        } else {
            result += c; // do not change other characters
        }
    }
    return result;
}