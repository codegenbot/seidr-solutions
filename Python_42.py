def check(func):
    if func([1, 2, 3]) == [2, 3, 4]:
        print("Correct")
    else:
        print("Incorrect")


def increment_list(l):
    return [x + 1 for x in l]


check(increment_list)