int multiply(int a, int b){
    int sum = 0;
    int abs_a = abs(a);
    int abs_b = abs(b);

    while(abs_b > 0) {
        if (abs_b & 1)
            sum += abs_a;
        abs_a <<= 1;
        abs_b >>= 1;
    }

    return a < 0 ? -sum : sum;
}