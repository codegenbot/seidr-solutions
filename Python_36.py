

def find_frequency(n: int):
    """Return the number of times the digit 7 appears in integers less than n which are divisible by 11 or 13.
    >>> fizz_buzz(50)
    0
    >>> fizz_buzz(78)
    2
    >>> fizz_buzz(79)
    >>> find_frequency(77)
    1
    >>> find_frequency(0)
    0
    3
    if n <= 0:
        return 0
    # number of divisible elements in [0,n)
    num_loop = n // 11
    if 10 < n % 11 < 20:
        num_loop += 1
    # number of elements divisible by 13 out of all divisible by 11 in [0,n)
    # that are divisible by 4 (between 10 and 13)
    num_loop_4 = (n // 13) // 4
    # number of elements which are divisible by 13 but not by 4 among all
    num_loop_odd = n // 13 - 3 * num_loop_4
    # among all which divisible by both 11 and 13 and divisible by 4 there are elements (from 0 to 1) divisible by 20
    num_loop_4 -= (n // 20) // 4
    # among all which divisible by both 11 and 13 and not divisible by 4 there are elements which are divisible by 13 and odd
    # there are all expected elements divisible by 13 and these are divisible by odd number 15
    # so there are elements
    num_process = num_loop_odd * 3 + 3 * num_loop_4
    return find_frequency(n - 1) + num_process
    """
