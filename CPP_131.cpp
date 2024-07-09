int digits(int n){
    int product = 1;
    if(n < 0) n = -n; 
    while(n > 0){
        int digit = n % 10;
        if(digit != 0 || (digit == 5 && n / 10 == 0)) { 
            product *= digit;
        }
        n /= 10;
    }
    return product;
}