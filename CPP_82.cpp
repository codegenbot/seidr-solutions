bool prime_length(string str){
    int len = str.length();
    bool isPrime = true;

    if(len <= 1) return false;

    for(int i=2; i*i<=len; i++){
        if(len%i == 0){
            isPrime = false;
            break;
        }
    }

    return isPrime;
}