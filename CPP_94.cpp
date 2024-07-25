int sumOfDigitsOfLargestPrime(int val) {
    if(val < 2)
        return 0;
    int i=2;
    while(i*i<=val){
        if(val%i==0) return 0;
        i++;
    }
    return val;
}

int skjkasdkd(vector<int> lst) {
    int maxPrime = 0;
    for(int num : lst) {
        if(num > 1 && isPrime(num)) {
            maxPrime = num;
            break;
        }
    }

    if(maxPrime == 0) return 0;

    int sum = 0;
    while(maxPrime > 0) {
        sum += maxPrime % 10;
        maxPrime /= 10;
    }

    return sum;
}

bool isPrime(int val) {
    if(val < 2)
        return false;
    for(int i=2; i*i<=val; i++){
        if(val%i==0)
            return false;
    }
    return true;
}