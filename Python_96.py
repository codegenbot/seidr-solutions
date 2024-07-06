```
def count_up_to(n):
    def is_prime(num):
        if num < 2:
            return False
        for i in range(2, int(num**0.5) + 1):
            if num % i == 0:
                return False
        return True

    result = []
    for i in range(len(result)+1):
        num = i+2
        if is_prime(num):
            result.append(num)
        if len(result) == n:
            break
    return result