int largest_divisor(int n){
    int largest = 1;
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            largest = i;
        }
    }
    return largest;
}