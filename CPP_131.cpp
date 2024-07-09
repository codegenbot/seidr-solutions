int digits(int n){
    int result = 1;
    while(n > 0){
        int digit = n % 10;
        if(digit % 2 != 0)
            result *= digit;
        n /= 10;
    }
    return result;
}