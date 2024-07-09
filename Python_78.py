```
def hex_key(num):
    primes = {'B': True, 'D': True}
    count = 0
    for char in num:
        if char.isdigit():
            digit = int(char)
            if digit > 1 and all(digit % i for i in range(2, int(len(str(digit)) ** 0.5) + 1)):
                count += 1
        elif char.upper() in primes:
            count += 1
    return count