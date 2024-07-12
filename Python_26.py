def check(func):
    def wrapper(numbers):
        return func(numbers)
    return wrapper

@check
def remove_duplicates(numbers):
    return list(set(numbers))

# Test the function
input_numbers = input("Enter numbers separated by spaces: ").strip().split()
numbers_list = list(map(int, input_numbers))
result = remove_duplicates(numbers_list)
print(result)