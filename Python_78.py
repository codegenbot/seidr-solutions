Here is the completed code:

def hex_key(num):
    primes = set([2, 3, 5, 7, 11, 13, 17])
    count = 0
    for char in num:
        if char.isdigit():
            digit = int(char)
            if digit in primes:
                count += 1
        elif char.upper() in 'BDF':
            count += 1
    return count