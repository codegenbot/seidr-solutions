```
def count_up_to(n):
    def is_prime(k):
        if k < 2:
            return False
        for i in range(2, int(k**0.5) + 1):
            if k % i == 0:
                return False
        return True

    result = []
    num = 2
    while num < n and len(result) < (num - 1):
        if is_prime(num):
            result.append(num)
        num += 1
    return result