def remove_duplicates(numbers_list):
    return list(set(numbers_list))

numbers_list = list(map(int, input("Enter the list of numbers separated by spaces: ").split()))
result = remove_duplicates(numbers_list)
print(result)