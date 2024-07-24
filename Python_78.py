```
def hex_key(num):
    def is_hex(c):
        return c in '0123456789ABCDEFabcdef'

    count = 0
    for c in num:
        if is_hex(c):
            count += 1
    return count