Here is the completed code:

int skjkasdkd(vector<int> lst){
    int max_prime = 0;
    for(int i : lst){
        if(isPrime(i) && i > max_prime){
            max_prime = i;
        }
    }
    return sumOfDigits(max_prime);
}

bool isPrime(int num){
    if(num <= 1)
        return false;
    for(int i = 2; i*i <= num; i++){
        if(num % i == 0)
            return false;
    }
    return true;
}

int sumOfDigits(int n){
    int sum = 0;
    while(n > 0){
        sum += n%10;
        n /= 10;
    }
    return sum;
}