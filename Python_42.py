def increment_list(l):
    return [x + 1 for x in l]

def check(increment_list):
    l = [1, 2, 3]
    if increment_list(l) == [2, 3, 4]:
        print("Pass")
    else:
        print("Fail")

check(increment_list)