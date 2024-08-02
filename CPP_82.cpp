bool prime_length(string str){
    int len = str.length();
    if(len <= 1) return false;
    for(int i = 2; i*i <= len; i++){
        if(len % i == 0) return false;
        while(len % (i*10 + 1) == 0 || len % (i*10 - 1) == 0){
            len /= i;
        }
    }
    return true;
}