def any_int(x, y, z):
    if not all(isinstance(i, int) for i in [x, y, z]):
        return False
    return x == y + z or y == x + z or z == x + y