int multiply(int a, int b){
    int unit_a = abs(a) % 10; // get the unit digit of a
    int unit_b = abs(b) % 10; // get the unit digit of b
    return unit_a * unit_b; // return the product of the unit digits
}