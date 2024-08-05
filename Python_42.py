def check(func):
    n = [1, 2, 3, 4]
    if func(n) == [2, 3, 4, 5]:
        print("Code is correct")
    else:
        print("Code is incorrect")

def increment_list(l):
    return [x + 1 for x in l]

check(increment_list)