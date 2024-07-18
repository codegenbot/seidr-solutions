def process_numbers(numbers, delimiter):
    result = []
    for num in numbers:
        result.extend([num, delimiter])
    result.pop() if result else None
    return result

# Read input from the user using raw_input()
numbers = raw_input("Enter numbers separated by space: ").split()
delimiter = raw_input("Enter the delimiter: ")

# Call the function
output = process_numbers(numbers, delimiter)
print(output)