def change_base(x: int, base: int):
    if x == 0:
        return '0'
    new_num = ''
    while x > 0:
        remainder = x % base
        new_num = str(remainder) + new_num
        x = x // base
    return new_num