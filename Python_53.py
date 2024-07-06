def add(x: int, y: int):
    result = x
    while y != 0:
        carry = result & y
        result = result ^ y
        y = carry << 1
    return result