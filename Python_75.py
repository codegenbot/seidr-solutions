```
def is_multiply_prime(a):
    def is_prime(n):
        if n < 2:
            return False
        for i in range(2, int(n**0.5) + 1):
            if n % i == 0:
                return False
        return True
    
    primes = [i for i in range(2, a) if is_prime(i)]
    prime_count = 0
    for prime in reversed(primes):
        while a % prime == 0:
            a //= prime
            prime_count += 1
            if prime_count > 2:
                return False
    return True