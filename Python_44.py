def change_base(x: int, base: int):
    if x < base:
        return str(x)
    else:
        return change_base(x // base, base) + str(x % base)