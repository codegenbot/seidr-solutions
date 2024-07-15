```
def count_up_to(n):
    def is_prime(x):
        if x < 2:
            return False
        for i in range(2, int(x**0.5) + 1):
            if x % i == 0:
                return False
        return True
    
    result = []
    i = 2
    while i < n:
        if is_prime(i):
            result.append(i)
        i += 1
    return result