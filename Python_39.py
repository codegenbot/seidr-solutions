def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(num ** 0.5) + 1):
        if num % i == 0:
            return False
    return True

def prime_fib(n: int):
    fib = [0, 1]
    prime_count = 0
    while True:
        num = fib[-1] + fib[-2]
        fib.append(num)
        if is_prime(num):
            prime_count += 1
            if prime_count == n:
                return num