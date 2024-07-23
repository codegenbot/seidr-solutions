def check(lst):
    return lst[-1] if len(lst) > 0 else None
your_list = [1, 2, 3, 4]
result = check(your_list)
print(result)