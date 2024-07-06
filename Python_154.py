```
def cycpattern_check(a, b):
    if int(a) % 2 == 0 and int(b) % 2 != 0:
        return "winten"
    else:
        return "not winten"


def check(func):
    def wrapper(a, b):
        return func(int(a), int(b)) == "winten"

    return wrapper


cycpattern_check = check(cycpattern_check)