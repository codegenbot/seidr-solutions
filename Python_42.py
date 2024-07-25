def check(func):
    if func([1, 2, 3]) == [2, 3, 4]:
        print("Test case 1 passed")
    else:
        print("Test case 1 failed")

def increment_list(l):
    return [x + 1 for x in l]

check(increment_list)