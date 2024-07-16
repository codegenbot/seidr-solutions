def increment_list(l):
    return [num + 1 for num in l]

def check(func):
    if func([1, 2, 3]) == [2, 3, 4]:
        print("Function is correct")
    else:
        print("Function is incorrect")

check(increment_list)