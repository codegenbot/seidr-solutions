def is_prime(n):
    if n <= 1:
        return False
    if n == 2:
        return True
    if n % 2 == 0:
        return False
    for i in range(3, int(n**0.5) + 1, 2):
        if n % i == 0:
            return False
    return True


def skjkasdkd(lst):
    primes = [x for x in lst if is_prime(x)]
    if not primes:
        return 0
    max_prime = max(primes)
    return sum(int(digit) for digit in str(max_prime))