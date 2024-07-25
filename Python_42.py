def check(func):
    assert func([1, 2, 3]) == [2, 3, 4]

def incr_list(l):
    return [x + 1 for x in l]

check(incr_list)