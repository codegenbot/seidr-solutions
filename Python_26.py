def check(func):
    def wrapper(numbers_list):
        return func(numbers_list)
    return wrapper

@check
def remove_duplicates(numbers_list):
    return list(set(numbers_list))

numbers_list = list(map(int, input().split()))
result = remove_duplicates(numbers_list)
print(result)