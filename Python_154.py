def check(func):
    def wrapper(a, b):
        return func(a, b) == "winten"

    return wrapper


cycpattern_check = check(cycpattern_check)