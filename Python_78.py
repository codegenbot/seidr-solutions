def hex_key(num):
    primes = {"B": True, "D": True}
    count = sum(1 for char in num.upper() if char.isdigit() or char in primes)
    return count