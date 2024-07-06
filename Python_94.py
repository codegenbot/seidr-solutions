def is_prime(n):
    # Check if n is greater than 1 and less than the square root of n
    if n > 1 and n < sqrt(n):
        for i in range(2, int(sqrt(n)) + 1):
            if n % i == 0:
                return False
        return True
    # If n is less than or equal to 1, it is not prime
    else:
        return False


def skjkasdkd(lst):
    max_prime = None
    for num in lst:
        if is_prime(num) and (max_prime is None or num > max_prime):
            max_prime = num
    if max_prime is not None:
        return sum(map(int, str(max_prime)))
    else:
        return 0