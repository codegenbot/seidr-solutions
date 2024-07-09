int findGCD(int a, int b) {
    if (b == 0) return abs(a);
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return abs(b); 
}