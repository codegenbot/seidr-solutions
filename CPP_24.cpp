int largest_divisor(int n){
    int largest = 0;
    for(int i = 1; i < n; i++){
        if(n % i == 0){
            largest = i;
        }
    }
    return largest;
}