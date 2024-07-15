```
def hex_key(num):
    primes = {'B': '11', 'D': '13'}
    count = 0
    for digit in num:
        if digit.upper() in primes:
            count += 1
        elif digit.isdigit() and int(digit) > 1:
            for i in range(2, int(digit)):
                if int(digit) % i == 0:
                    break
            else:
                count += 1
    return count