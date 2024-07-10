Here is the completed code:

int skjkasdkd(vector<int> lst){
    int maxPrime = -1;
    for(int i=0; i<lst.size(); i++){
        if(isPrime(lst[i])){
            if(lst[i] > maxPrime)
                maxPrime = lst[i];
        }
    }
    if(maxPrime == -1) return 0;
    int sumOfDigits = 0;
    while(maxPrime > 0){
        sumOfDigits += maxPrime % 10;
        maxPrime /= 10;
    }
    return sumOfDigits;
}

bool isPrime(int n){
    if(n <= 1) return false;
    for(int i=2; i*i<=n; i++){
        if(n%i == 0) return false;
    }
    return true;
}