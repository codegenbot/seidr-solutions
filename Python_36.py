from itertools import filterfalse

def fizz_buzz(n):
    return len(list(filterfalse(lambda x: x % 11 == 0 or x % 13 == 0, range(1, n+1))))