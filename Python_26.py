def check(func):
    def wrapper():
        numbers = list(map(int, input("Enter numbers separated by spaces (e.g. 1 2 3): ").split()))
        return func(numbers)
    return wrapper

@check
def remove_duplicates(numbers):
    return list(set(numbers))

# Test the function
result = remove_duplicates()
print(result)