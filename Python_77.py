def iscube(a):
    i = 0
    while round(i ** (1/3)) ** 3 != a:
        i += 1
    return True if i == int(i) else False