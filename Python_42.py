def increment_list(l):
    return [x + 1 for x in l]

def check(func):
    l = [1, 2, 3]
    print(func(l))

check(increment_list)