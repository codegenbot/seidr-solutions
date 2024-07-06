Here is the completed code:

int skjkasdkd(vector<int> lst){
    int maxPrime = -1;
    for(int num : lst){
        if(isPrime(num) && num > maxPrime){
            maxPrime = num;
        }
    }
    return sumOfDigits(maxPrime);
}

bool isPrime(int n){
    if(n <= 1) return false;
    if(n == 2 || n == 3) return true;
    if(n % 2 == 0 || n % 3 == 0) return false;
    for(int i = 5; i * i <= n; i += 6){
        if(n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

int sumOfDigits(int n){
    int sum = 0;
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}