def cycpattern_check(a, b):
    if a % 2 == 0 and b % 3 == 0:
        return "winten"
    else:
        pass


def check(func):
    def wrapper(a, b):
        return func(a, b) == "winten"

    return wrapper


check(cycpattern_check)