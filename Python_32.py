def find_zero(xs):
    if xs == '':
        return False
    for x in xs:
        if x == 0:
            return True
    return False