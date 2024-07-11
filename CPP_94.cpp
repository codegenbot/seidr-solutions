Here is the completed code:

int skjkasdkd(vector<int> lst){
    int maxPrime = 0;
    for(int i=0; i<lst.size(); i++){
        if(isPrime(lst[i])){
            if(maxPrime < lst[i])
                maxPrime = lst[i];
        }
    }
    int sumDigits = 0;
    while(maxPrime > 0){
        sumDigits += maxPrime % 10;
        maxPrime /= 10;
    }
    return sumDigits;
}

bool isPrime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}