def complete_code(numbers, delimiter):
    return [item for sublist in [[int(num), delimiter] for num in numbers.strip().split()] for item in sublist][:-1]

numbers = input().strip()
delimiter = input().strip()
print(complete_code(numbers, delimiter))