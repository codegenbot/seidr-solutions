```
def add(x: int, y: int):
    result = x
    while y != 0:
        remainder = x & y
        x = x ^ y
        y = remainder << 1
    return x