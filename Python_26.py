def check(func):
    def wrapper(numbers):
        return func(numbers)
    return wrapper

@check
def find_unique_numbers(numbers):
    return [num for num in numbers if numbers.count(num) == 1]