def hex_key(num):
    def is_hex_digit(c):
        return c in "0123456789ABCDEF"

    count = 0
    for digit in num.upper():
        if is_hex_digit(digit):
            count += 1
    return count