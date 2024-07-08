int largest_divisor(int n) {
    int divisor = n;
    while(divisor > 1) {
        if(n % divisor == 0) break;
        divisor--;
    }
    return divisor;
}