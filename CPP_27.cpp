string flip_case(string str){
    string flippedStr = "";
    for(int i=0; i<str.length(); i++){
        if(islower(str[i])){
            flippedStr += toupper(str[i]);
        }
        else if(isupper(str[i])){
            flippedStr += tolower(str[i]);
        }
        else{
            flippedStr += str[i];
        }
    }
    return flippedStr;
}