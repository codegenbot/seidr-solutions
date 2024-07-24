```
def hex_key(num):
    primes = {2, 3, 5, 7, ord('B'), ord('D')}
    count = 0
    for char in num:
        if char.upper() in '237BD':
            count += (int(char, 16) in primes)
    return count