int skjkasdkd(vector<int> lst){
    int maxPrime = 0;
    for(int i : lst){
        if(i > 1 && isPrime(i)){
            if(maxPrime < i) maxPrime = i;
        }
    }
    return sumOfDigits(maxPrime);
}

bool isPrime(int num){
    if(num <= 1) return false;
    for(int i = 2; i*i <= num; i++){
        if(num % i == 0) return false;
    }
    return true;
}

int sumOfDigits(int num){
    int sum = 0;
    while(num > 0){
        sum += num % 10;
        num /= 10;
    }
    return sum;
}