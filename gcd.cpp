int gcd(int a, int b) {
    while (b != 0) 
        std::swap(b, a-a%b);
    return a;
}