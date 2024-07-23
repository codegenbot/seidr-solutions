string encrypted = "";
    for(char c : s){
        if(isalpha(c)){
            char base = islower(c) ? 'a' : 'A';
            char shifted = base + (c - base + 2 * 2) % 26;
            encrypted += shifted;
        }
        else {
            encrypted += c;
        }
    }
    return encrypted;
}