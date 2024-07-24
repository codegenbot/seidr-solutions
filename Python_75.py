```
def is_multiply_prime(a):
    def is_prime(n):
        if n < 2:
            return False
        for i in range(2, int(n**0.5) + 1):
            if n % i == 0:
                return False
        return True

    for i in range(2, 100):
        for j in range(i, 100):
            for k in range(j, 100):
                if i * j * k == a and is_prime(i) and is_prime(j) and is_prime(k):
                    return True
    return False