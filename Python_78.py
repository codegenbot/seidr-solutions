```
def hex_key(num):
    primes = set([2,3,5,7,11,13,17])
    count = 0
    for digit in num:
        if digit.upper() in 'BDF':
            count += 1
        elif int(digit, 16) in primes:
            count += 1
    return count