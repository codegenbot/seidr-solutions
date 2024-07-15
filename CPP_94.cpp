int skjkasdkd(vector<int> lst){
    int maxPrime = -1;
    for(int num : lst){
        if(num > 1 && isPrime(num)){
            if(num > maxPrime) maxPrime = num;
        }
    }
    if(maxPrime == -1) return 0; // or throw an exception
    int sum = 0;
    while(maxPrime > 0){
        sum += maxPrime % 10;
        maxPrime /= 10;
    }
    return sum;
}

bool isPrime(int num){
    if(num <= 1) return false;
    for(int i = 2; i * i <= num; i++){
        if(num % i == 0) return false;
    }
    return true;
}