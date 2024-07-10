def find_unique_numbers(numbers):
    return [num for num in numbers if numbers.count(num) == 1]


# Call the function with input list
input_numbers = [2, 4, 4, 5, 6, 2, 7]
output = find_unique_numbers(input_numbers)
print(output)