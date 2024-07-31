// Complete the code by declaring the fib function with the correct signature
int fib(int n) {
    // Add the base case check inside the fib function
    if (n <= 1)
        return n;
    // Implement the recursive calculation inside the fib function
    return fib(n - 1) + fib(n - 2);
}

// Add the main function to call and test the fib function
int main() {
    // Test the fib function with an example input and assert the output
    assert(fib(12) == 144);
    return 0;
}