```
def hex_key(num):
    primes = {'B': '11', 'D': '13'}
    count = 0
    for char in num:
        if char.upper() in primes:
            count += 1
        elif char.isdigit():
            digit = int(char)
            if digit > 1 and all(digit % i for i in range(2, int(digit**0.5) + 1)):
                count += 1
    return count