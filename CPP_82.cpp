bool prime_length(string s){
    int len = s.length();
    if(len <= 1) return false;
    for(int i = 2; i * i <= len; i++){
        if(len % i == 0) return false;
    }
    return true;