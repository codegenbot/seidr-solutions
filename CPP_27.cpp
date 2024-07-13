string flip_case(string str){
    string result = "";
    for(int i=0; i<str.length(); i++){
        char c = str[i];
        if(c>=97&&c<=122){ // check if character is lowercase letter
            result+=toupper(c); // convert to uppercase and add to result
        }else if(c>=65&&c<=90){ // check if character is uppercase letter
            result+=tolower(c); // convert to lowercase and add to result
        }else{
            result+=c; // keep the same case for non-alphabet characters
        }
    }
    return result;
}