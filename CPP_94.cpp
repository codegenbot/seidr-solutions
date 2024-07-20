Here is the completed code:

int skjkasdkd(vector<int> lst){
    int maxPrime = -1;
    for(int num:lst){
        if(num > 1){
            bool isPrime = true;
            for(int i=2; i*i<=num && isPrime; i++){
                if(num%i == 0)
                    isPrime = false;
            }
            if(isPrime && num > maxPrime)
                maxPrime = num;
        }
    }
    int sumOfDigits = 0;
    while(maxPrime > 0){
        sumOfDigits += maxPrime % 10;
        maxPrime /= 10;
    }
    return sumOfDigits;
}