def prime_fib(n: int):
    def is_prime(num: int):
        if num < 2:
            return False
        for i in range(2, int(num**0.5) + 1):
            if num % i == 0:
                return False
        return True

    a, b = 0, 1
    result = []
    while n > 0:
        a, b = b, a + b
        if is_prime(b):
            result.append(str(a))
            n -= 1
    return ", ".join(result)