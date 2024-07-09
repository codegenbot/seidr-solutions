int multiply(int a, int b){
    int unitA = a % 10;
    int unitB = abs(b) % 10;
    return unitA * unitB;
}