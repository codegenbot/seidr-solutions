string encode(string message){
    string result = "";
    for(int i=0; i<message.length(); i++){
        char c = tolower(message[i]);
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
            result += c + 2;
        }
        else if(c >= 'a' && c <= 'z'){
            result += toupper(c);
        }
        else{
            result += c;
        }
    }
    return result;
}