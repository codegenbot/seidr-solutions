def check(func):
    def wrapper(*args, **kwargs):
        numbers_list = list(map(int, input().split(', '))
        return func(numbers_list)
    return wrapper

@check
def remove_duplicates(numbers_list):
    return list(set(numbers_list))

result = remove_duplicates([])
print(result)