def cycpattern_check(a, b):
    if not (isinstance(a, int) and isinstance(b, int)):
        return "not winten"
    a = str(int(str(a).zfill(6)))[1:]
    b = str(int(str(b).zfill(6)))[1:]

    if int(str(a) + str(b)) % 2 == 0:
        return "winten"
    else:
        return "not winten"


def check(func):
    def wrapper(a, b):
        return func(a, b) == "winten"

    return wrapper


cycpattern_check = check(cycpattern_check)