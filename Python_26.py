def check(func):
    def wrapper(*args, **kwargs):
        return func(*args, **kwargs)
    return wrapper

@check
def remove_duplicates():
    numbers_list = list(map(int, input().split()))
    return list(set(numbers_list))

# Test the function
result = remove_duplicates()
print(result)