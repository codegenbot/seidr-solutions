```
def hex_key(num):
    primes_count = 0
    for digit in num:
        if digit.upper() in ['B', 'D']:
            primes_count += 1
        elif digit.upper() in ['2', '3', '5', '7']:
            primes_count += 1
    return primes_count