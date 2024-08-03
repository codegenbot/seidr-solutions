def hex_key(num):
    primes = set("23B5D")
    count = sum(1 for c in num if c.upper() in primes)
    return count