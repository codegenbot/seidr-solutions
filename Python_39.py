```
def nth_prime(n: int) -> int:
    def is_prime(num: int) -> bool:
        if num < 2:
            return False
        for i in range(2, int(num**0.5) + 1):
            if num % i == 0:
                return False
        return True

    a = b = 1
    prime_count = 0

    while True:
        if is_prime(b):
            prime_count += 1
            if prime_count == n:
                return b
        a, b = b, a + b