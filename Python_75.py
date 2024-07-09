def is_multiply_prime(a):
    def is_prime(n):
        if n < 2:
            return False
        for i in range(2, int(n**0.5) + 1):
            if n % i == 0:
                return False
        return True
    
    factors = []
    i = 2
    while i * i <= a:
        if a % i:
            i += 1
        else:
            a //= i
            while a % i == 0:
                a //= i
            factors.append(i)
    
    if a > 1:
        factors.append(a)
    
    return len(factors) == 3 and all(map(is_prime, factors))