def remove_duplicates(lst):
    return list(set(lst))


def check(func):
    return func()


result = check(lambda: remove_duplicates([1, 2, 3, 2, 4, 3, 5]))
print(result)