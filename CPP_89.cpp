string result = "";
    for(char c : s){
        if(isalpha(c)){
            if(islower(c)){
                result += 'a' + (c - 'a' + 2 * 2) % 26;
            }
            else{
                result += 'A' + (c - 'A' + 2 * 2) % 26;
            }
        }
        else{
            result += c;
        }
    }
    return result;
}