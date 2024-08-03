def process_numbers(numbers, delimiter):
    result = [str(num) for num in numbers]
    return delimiter.join(result)

# Call the function
numbers = [1, 2, 3, 4, 5]
delimiter = ","
output = process_numbers(numbers, delimiter)
print(output)