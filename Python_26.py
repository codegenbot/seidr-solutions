def remove_duplicates(input_list):
    return list(dict.fromkeys(input_list))

def check(func):
    return func()

result = check(lambda: list(dict.fromkeys([1, 2, 3, 2, 4, 3, 5])))
print(result)