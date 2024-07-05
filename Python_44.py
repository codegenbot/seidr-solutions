
def change_base(x: int, base: int):
    if base == 2:
        return format(x, 'b')
    else:
        return format(x, 'o')