Here is the completed code:

int skjkasdkd(vector<int> lst){
    int max_prime = 0;
    for(int i : lst){
        if(i > 1 && isPrime(i)){
            if(i > max_prime)max_prime = i;
        }
    }
    if(max_prime == 0)return 0;
    int sum = 0;
    while(max_prime > 0){
        sum += max_prime % 10;
        max_prime /= 10;
    }
    return sum;
}

bool isPrime(int num){
    if(num <= 1) return false;
    for(int i = 2; i * i <= num; i++){
        if(num % i == 0)return false;
    }
    return true;
}