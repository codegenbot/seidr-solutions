def change_base(x: int, base: int):
    if x == 0:
        return '0'
    digits = []
    while x > 0:
        digits.insert(0, str(x % base))
        x //= base
    return ''.join(digits)