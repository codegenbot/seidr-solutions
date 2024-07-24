```
def hex_key(num):
    primes = {'B': '11', 'D': '13'}
    count = 0
    for digit in num.upper():
        if digit == 'A':
            count += 4
        elif digit == 'C':
            count += 2
        elif digit in primes:
            count += len(primes[digit])
        elif digit.isdigit() and int(digit) > 1:
            count += 1
    return count