def prime_fib(n):
    def is_prime(num):
        if num < 2:
            return False
        for i in range(2, int(num**0.5) + 1):
            if num % i == 0:
                return False
        return True

    def is_perfect_square(num):
        return int(num**0.5) ** 2 == num

    def is_fibonacci(num):
        return is_perfect_square(5 * num * num + 4) or is_perfect_square(
            5 * num * num - 4
        )

    count = 0
    i = 0
    last_prime_fib = None
    while count <= n:
        if is_fibonacci(i):
            if is_prime(i):
                count += 1
                last_prime_fib = i
        i += 1

    return last_prime_fib


n = int(input())
print(prime_fib(n))