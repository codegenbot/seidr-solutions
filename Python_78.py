```
def hex_key(num):
    primes = set([2, 3, 5, 7, 11, 13, 17])
    count = 0
    for char in num:
        if char.isdigit():
            digit = int(char)
        elif char.upper() in ['B', 'D']:
            digit = [11, 13][['B', 'D'].index(char.upper())]
        else:
            continue
        if digit in primes:
            count += 1
    return count