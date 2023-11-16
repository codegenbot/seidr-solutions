

def fizz_buzz(n: int):
    """Return the number of times the digit 7 appears in integers less than n which are divisible by 11 or 13.
    >>> fizz_buzz(50)
    0
    >>> fizz_buzz(78)
    2
    >>> fizz_buzz(79)
    3
    count = 0
    ones = [1, 11, 21, 31, 41, 51, 61, 71, 81, 91]
    _range = range(0, n, 11) + range(0, n, 13)
    for i in _range:
        if i != 0:
            if any(j in ones for j in i): # if j in ones where j is every element in i[:2] i_2 = i[:2]
                count = count + 1

    return count

    """
