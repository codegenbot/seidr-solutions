def prime_fib(n):
    fib_seq = [0, 1]
    while len(fib_seq) <= n:
        fib_seq.append(fib_seq[-1] + fib_seq[-2])

    def is_prime(num):
        if num < 2:
            return False
        for i in range(2, int(num**0.5) + 1):
            if num % i == 0:
                return False
        return True

    prime_fib_seq = [num for num in fib_seq if is_prime(num)]

    if n < len(prime_fib_seq):
        return prime_fib_seq[n]

    return None


try:
    n = int(input("Enter a number: "))
    result = prime_fib(n)
    print(result)
except ValueError:
    print("Invalid input. Please enter a valid integer.")