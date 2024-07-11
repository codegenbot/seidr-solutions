def add(x: int, y: int):
    if x < 0 and y < 0:
        return -1 * (abs(x) + abs(y))
    elif x < 0:
        return -1 * (x + abs(y))
    elif y < 0:
        return -1 * (abs(x) + y)
    else:
        return x + y