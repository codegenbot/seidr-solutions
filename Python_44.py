def change_base(x: int, base: int):
    return str(x).lower() if base == 3 else bin(x)[2:] if base == 2 else oct(x)[1:]