int largest_divisor(int n){
    for(int i = n; i > 0; i--){
        if(n%i == 0)
            return i;
    }
    return 1;
}