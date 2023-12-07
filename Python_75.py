def is_prime(n):
    for i in range(2, int(n ** 0.5) + 1):
        if n % i == 0:
            return False
    
    return True

def is_multiply_prime(n):
    for i in range(2, int(n ** 0.5) + 1):
        if n % i == 0 and is_prime(i) and is_prime(n // i):
            return True
    
    if is_prime(n):
        return False
    
    return True