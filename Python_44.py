def change_base(x: int, base: int):
    if x == 0:
        return '0'
    digits = ''
    while x > 0:
        digits = str(x % base) + digits
        x //= base
    return digits