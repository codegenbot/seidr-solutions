def format_numbers(numbers, delimiter):
    result = []
    for num in numbers[:-1]:
        result.extend([num, delimiter])
    if numbers:
        result.append(numbers[-1])
    return result

numbers = input("Enter numbers separated by spaces: ").split()
delimiter = input("Enter delimiter: ")
output = format_numbers(numbers, delimiter)
print(output)