def prime_fib(n):
    def is_prime(num):
        if num < 2:
            return False
        for i in range(2, int(num**0.5) + 1):
            if num % i == 0:
                return False
        return True

    def is_fib(num):
        return ((5 * num * num + 4) ** 0.5).is_integer() or ((5 * num * num - 4) ** 0.5).is_integer()

    return "Yes" if is_prime(n) and is_fib(n) else "No"

n = int(input())
print(prime_fib(n))