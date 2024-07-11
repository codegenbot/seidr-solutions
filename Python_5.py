def complete_code(numbers, delimiter):
    result = []
    numbers = numbers.split()
    for num in numbers[:-1]:
        result.extend([num, delimiter])
    if numbers:
        result.append(numbers[-1])
    return result

numbers = input()
delimiter = input()
print(complete_code(numbers, delimiter))