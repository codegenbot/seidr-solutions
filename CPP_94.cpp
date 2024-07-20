int skjkasdkd(vector<int> lst){
    int maxPrime = -1;
    for(int num : lst) {
        if(num > 1 && isPrime(num)) {
            if(num > maxPrime)
                maxPrime = num;
        }
    }
    return sumOfDigits(maxPrime);
}

bool isPrime(int num) {
    if(num <= 1)
        return false;
    for(int i = 2; i * i <= num; i++) {
        if(num % i == 0)
            return false;
    }
    return true;
}

int sumOfDigits(int n) {
    int sum = 0;
    while(n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}