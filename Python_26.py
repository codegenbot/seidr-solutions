def find_unique_numbers(numbers):
    return [num for num in numbers if numbers.count(num) == 1]

# Call the function with input data
numbers = input("Enter numbers separated by space: ").split()
result = find_unique_numbers(numbers)
print(result)