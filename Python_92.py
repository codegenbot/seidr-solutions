def any_int(x: float, y: float, z: float):
    if isinstance(x, float) or isinstance(y, float) or isinstance(z, float):
        return False
    else:
        return x == y + z or y == x + z or z == x + y