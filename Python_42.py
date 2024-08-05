def increment_list(l):
    return [x + 1 for x in l]

def check(func):
    test_list = [1, 2, 3]
    result = func(test_list)
    print(result)

check(increment_list)