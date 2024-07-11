def complete_code(numbers, delimiter):
    return [elem for sub_list in [[int(num), delimiter] for num in numbers.split()] for elem in sub_list][:-1]

numbers, delimiter = input().split()
print(complete_code(numbers, delimiter))