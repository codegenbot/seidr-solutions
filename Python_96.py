
def is_prime(n):
    if n < 2:
        return False
    for i in range(2, int(n ** 0.5) + 1):
        if n % i == 0:
            return False
    return True

def count_up_to(n):
    if n < 2:
        return []
    result = [2]
    for i in range(3, n + 1, 2):
        if is_prime(i):
            result.append(i)
    return result