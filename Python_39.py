def prime_fib(n: int) -> int:
    fib = [0, 1]
    while len(fib) <= n:
        fib.append(fib[-1] + fib[-2])
    
    # Check if the number is prime
    def is_prime(num):
        if num < 2:
            return False
        for i in range(2, int(num ** 0.5) + 1):
            if num % i == 0:
                return False
        return True
    
    # Get the prime numbers up to the desired value
    prime_fibs = []
    for i in fib:
        if is_prime(i):
            prime_fibs.append(i)
    
    # Return the nth prime Fibonacci number
    return prime_fibs[n]