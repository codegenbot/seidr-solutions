def check(increment_list):
    l = [1, 2, 3, 4, 5]
    return increment_list(l)

def increment_list(lst):
    return [x + 1 for x in lst]

result = check(increment_list)
print(result)