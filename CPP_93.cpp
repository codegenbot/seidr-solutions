string encode(string message){
    string result = "";
    for(int i=0; i<message.size(); i++){
        char c = message[i];
        if(isalpha(c)){
            if(isupper(c)){
                c = 'a' + (c - 'A');
            } else {
                c = 'A' + (c - 'a');
            }
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
                c = (char)(c + 2);
            }
        }
        result += c;
    }
    return result;
}