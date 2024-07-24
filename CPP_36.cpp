int fizz_buzz(int n) {
    int count = 0;
    for (int i = 1; i <= n; i++) { 
        if ((i % 3 == 0 && i % 5 == 0)) {
            count++; // if the number is divisible by both 3 and 5, increment the count
        }
    }
    return count;
}