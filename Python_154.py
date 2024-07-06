```
def check(func):
    if func("winemtt", "tinem") == "winten":
        return True
    else:
        return False

@check
def test_function(arg1, arg2):
    return arg1 + str(len(arg2))

test_function("winemtt", "tinem")