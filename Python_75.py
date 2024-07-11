```
def is_multiply_prime(a):
    def is_prime(n):
        if n < 2:
            return False
        for i in range(2, int(n**0.5) + 1):
            if n % i == 0:
                return False
        return True

    count = 0
    for i in range(2, a+1):
        if is_prime(i):
            factors = []
            while a > 1:
                if a % i == 0:
                    factors.append(i)
                    a //= i
                else:
                    break
            if len(factors) >= 3:
                return True
    return False