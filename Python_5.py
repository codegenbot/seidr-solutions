def complete_code(numbers, delimiter):
    return [item for sublist in [[int(num), delimiter] for num in numbers] for item in sublist][:-1]

numbers = input().strip().split()
delimiter = input().strip()
print(complete_code(numbers, delimiter))