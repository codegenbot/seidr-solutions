int hex_key(string num){
    int count = 0;
    for(int i=0; i<num.length(); i++){
        char c = num[i];
        if(c == '2' || c == '3' || c == '5' || c == '7' || c == 'B' || c == 'D'){
            count++;
        }
    }
    return count;
}