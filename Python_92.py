def any_int(x: int, y: int, z: int):
    if x == y + z or y == x + z or z == x + y:
        return True
    else:
        return False


# Cast float argument to int before passing it to the function
any_int(3.0, 4, 7) == False