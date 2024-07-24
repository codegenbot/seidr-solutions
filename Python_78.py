```
def hex_key(num):
    primes = {'B': '11', 'D': '13'}
    count = 0
    for digit in num.upper():
        if digit in primes:
            count += len(primes[digit])
        elif digit.isdigit() and int(digit) > 1:
            count += 1
    return count