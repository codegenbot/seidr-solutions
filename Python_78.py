```
def hex_key(num):
    primes = {'B': '11', 'D': '13'}
    count = 0
    for digit in num:
        if digit.upper() in primes:
            count += 1
    return count