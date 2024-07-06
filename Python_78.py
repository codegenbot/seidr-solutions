
def hex_key(num):
    primes = {2, 3, 5, 7, 11, 13}
    count = 0
    for c in num:
        if c.isdigit():
            count += (int(c) in primes)
        elif c.isalpha() and c.upper() in "ABCDEF":
            count += (int(c, 16) in primes)
    return count