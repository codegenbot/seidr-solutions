```
def is_multiply_prime(a):
    def is_prime(n):
        if n < 2:
            return False
        for i in range(2, int(n**0.5) + 1):
            if n % i == 0:
                return False
        return True

    factors = [i for i in range(2, a+1) if a % i == 0]
    factors.sort()
    count = 0
    for factor in factors:
        if is_prime(factor):
            count += 1
        if count >= 3:
            break
    return count >= 3