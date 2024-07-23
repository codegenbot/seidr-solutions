int multiply(int a, int b){
    int digit1 = abs(a % 10);
    int digit2 = abs(b % 10);
    return digit1 * digit2;
}