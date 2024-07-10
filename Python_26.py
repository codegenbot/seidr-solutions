def find_unique_numbers(numbers):
    return [num for num in numbers if numbers.count(num) == 1]

# Call the function with the list of numbers as input
result = find_unique_numbers([1, 2, 2, 3, 4, 4, 5])
print(result)