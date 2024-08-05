def increment_list(l):
    return [x + 1 for x in l]


def check(func):
    result = func([1, 2, 3])
    return result


check(increment_list)