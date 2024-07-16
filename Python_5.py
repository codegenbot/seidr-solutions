def process_numbers(numbers, delimiter):
    result = []
    for num in numbers:
        result.extend([num, delimiter])
    result.pop()
    return result

# Input from the user
numbers = input("Enter numbers separated by commas: ").split(',')
delimiter = input("Enter delimiter: ")

# Call the function and print the result
print(process_numbers(numbers, delimiter))