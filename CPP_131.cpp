int digits(int n){
    int product = 0;
    while(n > 0){
        int digit = n % 10;
        if(digit % 2 != 0){
            product *= digit;
        }
        n /= 10;
    }
    return product == 0 ? 0 : product;
}