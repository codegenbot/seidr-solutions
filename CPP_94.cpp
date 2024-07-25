int skjkasdkd(vector<int> lst){
    int maxPrime = 0;
    for(int i = 2; i <= 100000; i++){
        bool isPrime = true;
        for(int j = 2; j * j <= i; j++){
            if(i % j == 0){
                isPrime = false;
                break;
            }
        }
        if(isPrime && i > maxPrime){
            maxPrime = i;
        }
    }
    int sumOfDigits = 0;
    while(maxPrime > 0){
        sumOfDigits += maxPrime % 10;
        maxPrime /= 10;
    }
    return sumOfDigits;
}