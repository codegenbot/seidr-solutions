int hex_key(string num){
    int count = 0;
    for(char c : num){
        if(c == '2' || c == '3' || c == '5' || c == '7' || c == 'B' || c == 'D'){
            count++;
        }
    }
    return count;
}