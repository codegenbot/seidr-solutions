```
def hex_key(num):
    primes = set([2, 3, 5, 7, 11, 13, 17])
    count = 0
    for digit in num.upper():
        if digit.isdigit():
            if int(digit) in primes:
                count += 1
        elif 'A' <= digit <= 'F':
            if int(digit, 16) in primes:
                count += 1
    return count