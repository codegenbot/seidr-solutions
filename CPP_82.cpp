bool prime_length(string str){
    int n = str.length();
    bool isPrime = true;

    for(int i = 2; i*i <= n; i++){
        if(n % i == 0) {
            isPrime = false;
            break;
        }
    }

    return isPrime;
}