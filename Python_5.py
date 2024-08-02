def process_numbers(numbers, delimiter):
    return [str(num) for num in numbers]

# Example usage:
numbers = [1, 2, 3, 4, 5]
delimiter = ","
output = delimiter.join(process_numbers(numbers, delimiter))
print(output)