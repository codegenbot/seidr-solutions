def is_multiply_prime(a):
    def is_prime(n):
        if n < 2:
            return False
        for i in range(2, int(n**0.5) + 1):
            if n % i == 0:
                return False
        return True
    
    count = 0
    temp = a
    prime_factors = []
    while temp > 1:
        for i in range(2, temp + 1):
            if is_prime(i) and temp % i == 0:
                prime_factors.append(i)
                temp //= i
                break
    return len(prime_factors) >= 3