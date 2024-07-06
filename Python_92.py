def any_int(x: float or int, y: float or int, z: float or int):
    if x + y == z or x + z == y or y + z == x:
        return True
    else:
        return False