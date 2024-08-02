def process_numbers(numbers, delimiter):
    return delimiter.join(map(str, numbers))

# Example usage:
numbers = [1, 2, 3, 4, 5]
delimiter = ","
output = process_numbers(numbers, delimiter)
print(output)