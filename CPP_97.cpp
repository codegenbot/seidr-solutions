int multiply(int a, int b){
    int result = abs(a % 10) * abs(b % 10);
    return result;
}