def hex_key(num):
    primes = {"B": "11", "D": "13"}
    count = 0
    for char in num:
        if char.upper() in primes:
            count += 1
    return count