string encrypted = "";
    for(char c : s){
        if(c >= 'a' && c <= 'z'){
            encrypted += (char)((((c - 'a') + 2) * 2 + 'a') % 26 + 'a');
        } else {
            encrypted += c;
        }
    }
    return encrypted;
}