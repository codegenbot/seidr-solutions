```
def is_multiply_prime(a):
    def is_prime(n):
        if n < 2:
            return False
        for i in range(2, int(n**0.5) + 1):
            if n % i == 0:
                return False
        return True
    
    for i in range(2, a+1):
        for j in range(i, a//i+1):
            k = a // (i * j)
            if is_prime(i) and is_prime(j) and is_prime(k):
                return True
    return False