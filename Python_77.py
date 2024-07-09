def iscube(a):
    i = 0
    while round(i ** (1/3)) ** 3 <= abs(a):
        if round(i ** (1/3)) ** 3 == abs(a):
            return True
        i += 1
    return False