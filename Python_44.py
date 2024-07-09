def change_base(x: int, base: int):
    return str(base_change(x, base))

def base_change(x, base):
    if x < base:
        return x
    else:
        return base_change(x // base, base) * 10 + x % base