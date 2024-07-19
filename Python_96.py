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
    num = 2
    while num < n and len(result) < n - 1:
        if is_prime(num):
            result.append(num)
        num += 1
    return result