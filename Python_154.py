def cycpattern_check(a, b):
    if not a.isnumeric() or not b.isnumeric():
        return "Invalid input"

    total = int(a) + int(b)
    if total % 2 == 0:
        return "winten"
    else:
        return "not winten"


def check(func):
    def wrapper(a, b):
        return func(a, b) == "winten"

    return wrapper


cycpattern_check = check(cycpattern_check)