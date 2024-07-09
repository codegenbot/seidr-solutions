def any_int(x, y, z):
    return (x == y + z or x == z + y or y == x + z or y == z + x or z == x + y or z == y + x) and isinstance(x, int) and isinstance(y, int) and isinstance(z, int)