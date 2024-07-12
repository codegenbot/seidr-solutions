```
def hex_key(num):
    primes = {'B': '11', 'D': '13'}
    count = 0
    for digit in num:
        if digit.upper() in primes:
            count += 1
        elif digit.isdigit():
            if int(digit) > 1 and all(int(digit) % i for i in range(2, int(digit)**0.5 + 1)):
                count += 1
    return count