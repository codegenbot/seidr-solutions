def change_base(x: int, base: int):
    convert_string = "0123456789ABC"
    if x < base:
        return convert_string[x]
    else:
        return change_base(x // base, base) + convert_string[x % base]