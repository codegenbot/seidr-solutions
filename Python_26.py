def remove_duplicates(input_list):
    seen = set()
    return [x for x in input_list if not (x in seen or seen.add(x))]


def check(func):
    return func()


result = check(lambda: remove_duplicates([1, 2, 3, 2, 4, 3, 5]))
print(result)