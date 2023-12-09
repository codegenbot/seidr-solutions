def prime_fib(n):
    if n <= 2:
        return None
    sieve = [True] * (n + 1)
    for p in range(2, int(n ** 0.5) + 1):
        if sieve[p]:
            for i in range(p * p, n + 1, p):
                sieve[i] = False
    prime_numbers = [p for p in range(2, n + 1) if sieve[p]]
    fibonacci_sequence = [0, 1]
    for i in range(2, len(prime_numbers)):
        fibonacci_sequence.append(fibonacci_sequence[-1] + fibonacci_sequence[-2])
    return prime_numbers[n - 1], fibonacci_sequence[n - 1]