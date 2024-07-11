def complete_code(numbers, delimiter):
    return [int(num) for num in numbers.split(delimiter)]

numbers = input().strip()
delimiter = input().strip()
print(complete_code(numbers, delimiter))