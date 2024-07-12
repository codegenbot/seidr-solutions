```
def hex_key(num):
    primes = {2: True, 3: True, 5: True, 7: True, 11: True, 13: True}
    count = 0
    for digit in num:
        if digit.isdigit():
            num = int(digit)
        else:
            num = ord(digit.upper()) - 55
        if primes.get(num):
            count += 1
    return count