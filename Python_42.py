def increment_list(l):
    return [x + 1 for x in l]

def check(func):
    assert func([1, 2, 3]) == [2, 3, 4]

check(increment_list)