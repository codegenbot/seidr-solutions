def increment_list(l):
    return [x + 1 for x in l]

def check(function):
    return function([1, 2, 3])

print(check(increment_list))