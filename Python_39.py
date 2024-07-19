def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(num**0.5) + 1):
        if num % i == 0:
            return False
    return True


def is_fibonacci(num):
    return ((5 * num * num + 4) ** 0.5).is_integer() or (
        (5 * num * num - 4) ** 0.5
    ).is_integer()


def prime_fib(n):
    primes_and_fibs = [
        num for num in range(2, n) if is_prime(num) and is_fibonacci(num)
    ]
    return len(primes_and_fibs)


try:
    n = int(input())
    print(prime_fib(n))
except:
    print("Invalid input")