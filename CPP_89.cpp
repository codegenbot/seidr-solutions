string encrypted = "";
    for(char c : s){
        if(isalpha(c)){
            char base = islower(c) ? 'a' : 'A';
            c = base + (c - base + 2*2) % 26;
        }
        encrypted += c;
    }
    return encrypted;
}