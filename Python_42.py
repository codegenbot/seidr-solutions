def increment_list(l):
    return [x + 1 for x in l]

def check(fn):
    l = [1, 2, 3]
    return fn(l)

check(increment_list)