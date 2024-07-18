def process_numbers(numbers, delimiter):
    result = " ".join(numbers)
    return result


# Read input from the user
numbers = input("Enter numbers separated by space: ").split()
delimiter = input("Enter the delimiter: ")

# Call the function
output = process_numbers(numbers, delimiter)
print(output)