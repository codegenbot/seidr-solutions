def check(func):
    l = [1, 2, 3, 4]
    return func(l)

def incr_list(lst):
    return [num + 1 for num in lst]

result = check(incr_list)
print(result)