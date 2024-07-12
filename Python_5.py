def process_numbers(numbers, delimeter):
    result = []
    for num in numbers:
        result.extend([num, delimeter])
    result.pop()
    return result


numbers = input("Enter the numbers separated by spaces: ").split()
delimeter = input("Enter the delimeter: ")
output = process_numbers(numbers, delimeter)
print(output)