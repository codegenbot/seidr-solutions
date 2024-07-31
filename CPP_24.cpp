int largest_divisor(int n) {
    for(int i = n-1; i >= 1; i--){
        if(n % i == 0){
            return i;
        }
    }
    return -1;
}