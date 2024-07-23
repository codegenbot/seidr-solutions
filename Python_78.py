```
def hex_key(num):
    primes = set([2, 3, 5, 7, ord('B'), ord('D')])
    count = 0
    for digit in num:
        if digit.upper() in primes:
            count += 1
    return count