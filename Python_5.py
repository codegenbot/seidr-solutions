def complete_code(numbers, delimiter):
    result = []
    for num in numbers[:-1]:
        result.extend([num, delimiter])
    if numbers:
        result.append(numbers[-1])
    return result

numbers = input("Enter numbers separated by space: ").split()
delimiter = input("Enter delimiter: ")
print(complete_code(numbers, delimiter))