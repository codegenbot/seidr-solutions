

def largest_prime_factor(n: int):
    """
    i = 2
    while i * i <= n:
        if n % i:
            i += 1
        else:
            n //= i
    return n


def largest_prime_factor_rec(n: int):
    "*** YOUR CODE HERE ***"
    if n == 1:
        return 1
    elif n % 2 == 0:
        return largest_prime_factor_rec(n // 2)
    else:
        return largest_prime_factor_rec(n - 1)
    2
    """
