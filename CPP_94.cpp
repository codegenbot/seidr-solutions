int skjkasdkd(vector<int> lst){
    int maxPrime = 0;
    for(int i = 2; i <= 10000000; i++){
        bool isPrime = true;
        if(i > 1) {
            for(int j = 2; j * j <= i; j++) {
                if(i % j == 0) {
                    isPrime = false;
                    break;
                }
            }
            if(isPrime) maxPrime = i;
        }
    }
    int sum = 0;
    while(maxPrime > 0){
        sum += maxPrime % 10;
        maxPrime /= 10;
    }
    return sum;
}