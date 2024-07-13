string flip_case(string str){
    string result = "";
    for(int i=0; i<str.length(); i++){
        char c = str[i];
        if(islower(c)) // if character is lowercase
            result += toupper(c);  // convert to uppercase and add to result
        else
            result += tolower(c);  // convert to lowercase and add to result
    }
    return result;
}