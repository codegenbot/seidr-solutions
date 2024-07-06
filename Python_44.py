
def change_base(x: int, base: int):
    return str(bin(x)[2:])[::-1]