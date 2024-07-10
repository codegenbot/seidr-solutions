```
def hex_key(num):
    primes = {2, 3, 5, 7, 11, 13, 17}
    prime_count = 0
    for digit in num:
        if digit.upper() in "BDF":
            prime_count += 1
        elif int(digit, 16) in primes:
            prime_count += 1
    return prime_count