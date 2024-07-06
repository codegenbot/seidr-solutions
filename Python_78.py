```
def hex_key(num):
    primes = set([2, 3, 5, 7, 11, 13, 17])
    count = 0
    for char in num:
        if char.isdigit():
            digit = int(char)
        elif char.upper() in 'BDF':
            digit = 11 if char.upper() == 'B' else 13 if char.upper() == 'D' else 15
        else:
            continue
        if digit in primes:
            count += 1
    return count