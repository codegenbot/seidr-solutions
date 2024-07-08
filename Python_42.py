def increment_list(l):
    return [x + 1 for x in l]

def check(func):
    return func([1, 2, 3])

check(increment_list)