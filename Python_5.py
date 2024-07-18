def process_numbers(numbers, delimiter):
    result = []
    for num in numbers:
        result.extend([num, delimiter])
    result.pop() if result else None
    return result


# Read input from the user
numbers = input("Enter numbers separated by space: ").split()
numbers = numbers if numbers != [""] else []
delimiter = input("Enter the delimiter: ").rstrip()

# Call the function
output = process_numbers(numbers, delimiter)
print(output)