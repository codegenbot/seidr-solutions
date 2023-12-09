def any_int(x: float, y: float, z: float):
    if x == y + z or y == x + z or z == x + y or x == y == z:
        return True
    else:
        return False