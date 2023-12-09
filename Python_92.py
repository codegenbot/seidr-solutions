
def any_int(x: float, y: float, z: float) -> bool:
    if x + y == z or x + z == y or y + z == x:
        return True
    else:
        return False