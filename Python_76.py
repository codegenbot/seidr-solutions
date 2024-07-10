```
def is_prime(n):
    if n < 2:
        return False
    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0:
            return False
    return True

def nth_mersenne_prime(k):
    num = 2
    while k > 0:
        mersenne_num = (2**num) - 1
        if is_prime(mersenne_num):
            num += 1
            k -= 1
        else:
            num += 1
    return mersenne_num