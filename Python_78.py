def hex_key(num):
    primes = {"B": True, "D": True}
    count = sum(1 for digit in num if digit.upper() in primes)
    return count