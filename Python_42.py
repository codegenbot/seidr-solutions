def check(func):
    assert func([1, 2, 3]) == [2, 3, 4]

def increment_list(l):
    return [x + 1 for x in l]

check(increment_list)