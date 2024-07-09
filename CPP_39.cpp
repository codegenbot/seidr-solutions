int prime_fib(int n) {
    if(n <= 1)
        return 1;
    int a = 1, b = 1, fib = 2;
    while(fib < n){
        int temp = a + b;
        a = b;
        b = temp;
        if(isPrime(b))
            return b;
        fib++;
    }
    return -1; // not found
}

bool isPrime(int num) {
    if(num <= 1)
        return false;
    for(int i = 2; i*i <= num; i++)
        if(num % i == 0)
            return false;
    return true;
}

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    std::cout << "The " << std::to_string(n) << "th prime Fibonacci number is: " << std::to_string(prime_fib(n)) << std::endl;
    assert (prime_fib(10) == 433494437);
    return 0;
}