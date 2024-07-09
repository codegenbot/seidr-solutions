def increment_list(l):
    return [x + 1 for x in l]


def check(func):
    l = [1, 2, 3]
    if func(l) == [2, 3, 4]:
        print("Test passed")
    else:
        print("Test failed")


check(increment_list)