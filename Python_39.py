def prime_fib(n: int):
    def is_prime(num):
        if num < 2:
            return False
        for i in range(2, int(num**0.5) + 1):
            if num % i == 0:
                return False
        return True

    def fibonacci(n):
        fib = [0, 1]
        prime_fib_count = 2
        while prime_fib_count < n:
            next_fib = fib[-1] + fib[-2]
            if is_prime(next_fib):
                fib.append(next_fib)
                prime_fib_count += 1
            else:
                fib.append(next_fib)
        return fib

    fib_numbers = fibonacci(n)
    return fib_numbers[-1]