def find_unique_numbers(numbers):
    return [num for num in numbers if numbers.count(num) == 1]

def find_unique_numbers_wrapper(find_unique_numbers):
    numbers = [1, 2, 2, 3, 4, 4]
    result = find_unique_numbers(numbers)
    print(result)

find_unique_numbers_wrapper(find_unique_numbers)