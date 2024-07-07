int hex_key(string num){
    int count = 0;
    for(int i=0; i<num.length(); i++){
        if(num[i] >= '2' && num[i] <= '7' || num[i] == 'B' || num[i] == 'D' || num[i] == 'F'){
            count++;
        }
    }
    return count;
}