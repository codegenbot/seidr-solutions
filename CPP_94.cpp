int skjkasdkd(vector<int> lst){
    int max_prime = 0;
    for(int num : lst){
        if(isPrime(num) && num > max_prime){
            max_prime = num;
        }
    }
    return sum_of_digits(max_prime);
}

bool isPrime(int n) {
    if (n <= 1)
        return false;
    if (n == 2)
        return true;
    if (n % 2 == 0)
        return false;

    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int sum_of_digits(int n) {
    int sum = 0;
    while(n != 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}