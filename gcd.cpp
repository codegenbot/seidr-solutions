int findGCD(int a, int b) {
    if(b == 0)
        return a;
    else 
        return findGCD(b, a % b);
}