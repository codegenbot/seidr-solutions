```
def hex_key(num):
    prime_hex = {'B': '11', 'D': '13'}
    count = 0
    for digit in num:
        if digit.upper() in prime_hex:
            count += 1
        elif digit.upper() in '2357':
            count += 1
    return count