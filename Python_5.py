def process_numbers(numbers, delimiter):
    result = []
    for num in numbers:
        result.extend([num, delimiter])
    result.pop()
    return result

# Call the function with the required input
numbers = [5, 10, 15, 20]
delimiter = "/"
output = process_numbers(numbers, delimiter)
print(output)