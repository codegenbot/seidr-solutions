def any_int(x: int, y: int, z: int):
    if x == y + z or y == x + z or z == x + y:
        return True
    else:
        return False