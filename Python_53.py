def add(x: int, y: int):
    if x < 0:
        if y < 0:
            return -1 * (abs(x) + abs(y))
        else:
            return -1 * (x + y)
    elif y < 0:
        return -1 * (x + abs(y))
    else:
        if x == y:
            return 2 * x
        elif x > y:
            return x - y
        else:
            return y - x