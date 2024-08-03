def check(find_unique_numbers):
    return find_unique_numbers

def find_unique_numbers(numbers):
    return [num for num in numbers if numbers.count(num) == 1]

result = check(find_unique_numbers)
print(result([1, 2, 2, 3, 3, 4]))  # Example input