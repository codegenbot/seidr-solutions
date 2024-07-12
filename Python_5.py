def format_numbers(numbers, delimiter):
    return delimiter.join(map(str, numbers))

# Call the function with appropriate inputs
numbers = [1, 2, 3, 4, 5]
delimiter = ","
result = format_numbers(numbers, delimiter)
print(result)