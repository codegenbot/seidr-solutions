

def is_prime(n):
    """Return true if a given number is prime, and false otherwise.
    >>> is_prime(6)
    False
    >>> is_prime(101)
    True
    >>> is_prime(11)
    True
    >>> is_prime(13441)
    True
    >>> is_prime(61)
    True
    >>> is_prime(4)
    False
    >>> is_prime(1)
    False
    if n == 2:
        return True
    if n < 2:
        return False
    if n % 2 == 0:
        return False
    i = 3
    while i < n:
        if n % i == 0:
            return False
        i += 2
    return True


def factor(n):
    """Return a list of the prime factors of the given number.
    >>> factor(6)
    [2, 3]
    >>> factor(101)
    [101]
    >>> factor(11)
    [11]
    >>> factor(13441)
    [11, 13, 41]
    >>> factor(61)
    [61]
    >>> factor(4)
    [2, 2]
    >>> factor(1)
    []
    """
    if n == 1:
        return []
    i = 2
    factors = []
    while i <= n:
        if n % i == 0 and is_prime(i):
            factors.append(i)
            n = n / i
        i += 1
    return factors


def factor_count(factors):
    """Return the number of factors of a given number.
    >>> factor_count([2, 2, 2, 3])
    3
    >>> factor_count([2, 2, 2, 2])
    1
    >>> factor_count([2, 2, 2, 2, 2])
    1
    >>> factor_count([2, 3, 5, 7])
    4
    >>> factor_count([2, 2, 3, 3])
    2
    >>> factor_count([2, 2, 3, 3, 3])
    2
    """
    if len(factors) == 0:
        return 0
    factors = sorted(factors)
    count = 1
    prev = factors[0]
    for factor in factors:
        if factor != prev:
            count += 1
            prev = factor
    return count


def divisors(n):
    """Return the number of divisors of the given number.
    >>> divisors(6)
    4
    >>> divisors(101)
    2
    >>> divisors(11)
    2
    >>> divisors(13441)
    8
    >>> divisors(61)
    2
    >>> divisors(4)
    3
    >>> divisors(1)
    1
    """
    factors = factor(n)
    factor_counts = factor_count(factors)
    return factor_counts


def tri_num(n):
    """Return the nth triangle number.
    >>> tri_num(1)
    1
    >>> tri_num(2)
    3
    >>> tri_num(5)
    15
    >>> tri_num(10)
    55
    >>> tri_num(100)
    5050
    """
    return sum(range(n + 1))


def tri_nums(n):
    """Return a list of the first n triangle numbers.
    >>> tri_nums(5)
    [1, 3, 6, 10, 15]
    >>> tri_nums(10)
    [1, 3, 6, 10, 15, 21, 28, 36, 45, 55]
    >>> tri_nums(100)
    [1, 3, 6, 10, 15, 21, 28, 36, 45, 55, 66, 78, 91, 105, 120, 136, 153, 171, 190, 210, 231, 253, 276, 300, 325, 351, 378, 406, 435, 465, 496, 528, 561, 595, 630, 666, 703, 741, 780, 820, 861, 903, 946, 990, 1035, 1081, 1128, 1176, 1225, 1275, 1326, 1378, 1431, 1485, 1540, 1596, 1653, 1711, 1770, 1830, 1891, 1953, 2016, 2080, 2145, 2211, 2278, 2346, 2415, 2485, 2556, 2628, 2701, 2775, 2850, 2926, 3003, 3081, 3160, 3240, 3321, 3403, 3486, 3570, 3655, 3741, 3828, 3916, 4005, 4095, 4186, 4278, 4371, 4465, 4560, 4656, 4753, 4851, 4950, 5050]
    """
    return [tri_num(i) for i in range(1, n + 1)]


def tri_divisors(n):
    """Return the number of divisors of the nth triangle number.
    >>> tri_divisors(1)
    1
    >>> tri_divisors(2)
    2
    >>> tri_divisors(5)
    4
    >>> tri_divisors(10)
    6
    >>> tri_divisors(100)
    16
    """
    num = tri_num(n)
    return divisors(num)


def first_tri_num_over_divisors(divisors):
    """Return the first triangle number with over n divisors.
    >>> first_tri_num_over_divisors(5)
    28
    >>> first_tri_num_over_divisors(10)
    120
    >>> first_tri_num_over_divisors(100)
    73920
    """
    i = 1
    while tri_divisors(i) <= divisors:
        i += 1
    return tri_num(i)


if __name__ == '__main__':
    import doctest
    doctest.testmod()
    """
