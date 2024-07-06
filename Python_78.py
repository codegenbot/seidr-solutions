```
def hex_key(num):
    prime_hex_digits = {'B': '11', 'D': '13', '7': '7'}
    count = 0
    for digit in num:
        if digit.upper() in prime_hex_digits:
            count += 1
    return count