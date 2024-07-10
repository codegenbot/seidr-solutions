```
def is_prime(m):
    if m < 2:
        return False
    for i in range(2, int(math.sqrt(m)) + 1):
        if m % i == 0:
            return False
    return True

def nth_prime(n):
    count = 0
    num = 2
    while True:
        if is_prime(num):
            count += 1
            if count == n:
                return num
        num += 1