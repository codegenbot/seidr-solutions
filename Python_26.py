def remove_duplicates(numbers_list):
    return sorted(list(set(numbers_list)))

numbers_list = input("Enter a list of numbers separated by spaces: ").split()
numbers_list = [int(x) for x in numbers_list]
result = remove_duplicates(numbers_list)
print(result)