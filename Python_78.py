```
def hex_key(num):
    hex_digits = set('0123456789ABCDEF')
    return sum(1 for char in num.upper() if char in hex_digits)