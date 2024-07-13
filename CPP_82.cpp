bool prime_length(string str){
    int length = str.length();
    bool isPrime = true;

    if(length <= 1) return false;
    for(int i = 2; i * i <= length; i++){
        if(length % i == 0) {
            isPrime = false;
            break;
        }
    }

    return isPrime;
}