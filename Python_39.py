def prime_fib(n):
    def is_prime(num):
        if num < 2:
            return False
        for i in range(2, int(num ** 0.5) + 1):
            if num % i == 0:
                return False
        return True

    def is_fib(num):
        phi = 0.5 + 0.5 * 5 ** 0.5
        a = phi * num
        if abs(round(a) - a) < 1e-9:
            return True
        a = 2 * phi * num
        if abs(round(a) - a) < 1e-9:
            return True
        return False

    count = 0
    num = 2
    while count < n:
        if is_prime(num) and is_fib(num):
            count += 1
        num += 1
    return num - 1

n = int(input())
print(prime_fib(n))
