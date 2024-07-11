def change_base(x: int, base: int):
    return str(base) if x == 0 else change_base(x // base, base) + str(x % base)