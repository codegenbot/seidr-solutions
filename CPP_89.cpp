string encrypted = "";
    for(char c : s){
        if(c >= 'a' && c <= 'z'){
            c += 2*2;
            if(c > 'z'){
                c -= 26;
            }
        }
        encrypted += c;
    }
    return encrypted;
}