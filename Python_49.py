def modp(a: int, b: int):
    if a == 0:
        return 0
    elif b == 1:
        return a
    else:
        result = pow(a, b-1, b)
        if result == 1 and is_prime(b):
            return a % b
        for i in range(2, b):
            result = (result * a) % b
        return result

def is_prime(num: int):
    if num < 2:
        return False
    for i in range(2, int(num**0.5) + 1):
        if num % i == 0:
            return False
    return True