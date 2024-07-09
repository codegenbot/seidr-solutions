Here is the completed code:

bool prime_length(string str){
    int len = str.length();
    bool isPrime = true;
    for(int i=2; i*i <= len; i++){
        if(len%i == 0){
            isPrime = false;
            break;
        }
    }
    return isPrime;
}