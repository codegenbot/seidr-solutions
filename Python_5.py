def format_numbers(numbers, delimiter):
    result = []
    for num in numbers:
        result.extend([num, delimiter])
    result.pop()
    return result


numbers = input("Enter numbers separated by space: ").split()
delimiter = input("Enter delimiter: ")

output = format_numbers(numbers, delimiter)
print(output)