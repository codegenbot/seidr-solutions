bool prime_length(string str){
    int length = str.length();
    if(length < 2){
        return false; // strings with length less than 2 are not prime
    }
    for(int i=2; i*i<=length; i++){
        if(length%i==0){
            return false; // string length is divisible by a number other than 1 and itself, so not prime
        }
    }
    return true; // string length is prime
}