int primeFib(int num) {
    int a = 0, b = 1, fibNum = 0;
    while (true) {
        fibNum = a + b;
        a = b;
        b = fibNum;
        if (isPrime(fibNum)) {
            if (fibNum > num) return std::to_string(fibNum);
        }
    }
}