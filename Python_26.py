def check(func):
    def wrapper(numbers):
        return func(numbers)
    return wrapper

@check
def remove_duplicates(numbers):
    return list(set(numbers))

# Test the function
numbers_list = list(map(int, raw_input("Enter numbers separated by spaces (e.g. 1 2 3): ").split()))
result = remove_duplicates(numbers_list)
print(result)