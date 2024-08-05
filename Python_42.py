def increment_list(l):
    return [x + 1 for x in l]

def check(func):
    if func([1, 2, 3]) == [2, 3, 4]:
        return True
    else:
        return False

print(check(increment_list))