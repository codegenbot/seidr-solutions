def cycpattern_check(a, b):
    if a % 2 == 0 and b % 2 != 0:
        return "winten"
    else:
        return "not winten"


def check(func):
    def wrapper(a, b):
        return func(a, b) == "winten"

    return wrapper


cycpattern_check = check(cycpattern_check)