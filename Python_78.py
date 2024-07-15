def hex_key(num):
    primes = {"B": True, "D": True}
    count = sum(1 for char in num if char in primes)
    return count