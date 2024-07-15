def prime_fib(n: int) -> bool:
    if n <= 1:
        return False
    a = 0
    b = 1
    for _ in range(n):
        a, b = b, a + b
        if b == n:
            break
    else:
        return False
    for i in range(2, int(b ** 0.5) + 1):
        if b % i == 0:
            return False
    return True