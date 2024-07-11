```
def hex_key(num):
    primes = {'B': True, 'D': True, '7': True, '5': True, '3': True, '2': True}
    count = 0
    for char in num:
        if char in primes:
            count += 1
    return count