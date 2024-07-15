def change_base(x: int, base: int):
    return '' if x == 0 else change_base(x // base, base) + str(x % base)