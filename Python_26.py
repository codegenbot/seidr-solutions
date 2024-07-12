from six.moves import input

def check(func):
    def wrapper(numbers):
        return func(numbers)
    return wrapper

@check
def remove_duplicates(numbers):
    return list(set(numbers))

# Test the function
input_numbers = input("Enter numbers separated by spaces (e.g. 1 2 3): ").strip()
numbers_list = list(map(int, input_numbers.split()))
result = remove_duplicates(numbers_list)
print(result)