def check(func):
    def wrapper(args):
        return func(args)
    return wrapper

@check
def remove_duplicates(numbers):
    return list(set(numbers))

# Test the function
numbers_list = list(map(int, input("Enter numbers separated by spaces (e.g. 1 2 3): ").split()))
result = remove_duplicates(numbers_list)
print(result)