def any_int(x, y, z):
    if x + y == z or x + z == y or y + z == x:
        return True
    else:
        return False