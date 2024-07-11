def complete_code(numbers, delimiter):
    return [elem for sub_list in [[int(num), delimiter] for num in numbers] for elem in sub_list][:-1]

numbers = input().strip().split()
delimiter = input().strip()
print(complete_code(numbers, delimiter))