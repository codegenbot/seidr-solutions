def increment_list(l):
    return [num + 1 for num in l]

def check(function):
    lst = [1, 2, 3, 4]
    return function(lst)

print(check(increment_list))