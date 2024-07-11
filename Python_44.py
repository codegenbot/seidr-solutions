def change_base(x: int, base: int):
    convertString = "0123456789ABC"
    if x < base:
        return convertString[x]
    else:
        return change_base(x // base, base) + convertString[x % base]