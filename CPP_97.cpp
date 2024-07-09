Here is the completed code:

int multiply(int a, int b){
    int unit_a = a % 10;
    int unit_b = abs(b) % 10; // take absolute value
    return unit_a * unit_b;
}