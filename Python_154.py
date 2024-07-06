def cycpattern_check(a, b):
    if not a.isnumeric() or not b.isnumeric():
        return False

    total = int(a) + int(b)
    return total % 2 == 0


def check(func):
    def wrapper(a, b):
        return func(a, b)

    return wrapper


cycpattern_check = check(cycpattern_check)