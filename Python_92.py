def any_int(x, y, z):
    return (x == y + z or y == x + z or z == x + y) and all(isinstance(num, int) for num in [x, y, z])