bool prime_length(string str){
    int len = str.length();
    if(len <= 1) return false;
    for(int i = 2; i*i <= len; i++){
        if(len % i == 0) return false;
        while(len % (i*10 + 9) == 0 || len % (i*10 + 8) == 0 || len % (i*10 + 7) == 0 || len % (i*10 + 6) == 0 || len % (i*10 + 5) == 0 || len % (i*10 + 4) == 0 || len % (i*10 + 3) == 0 || len % (i*10 + 2) == 0 || len % (i*10 + 1) == 0) return false;
    }
    return true;
}