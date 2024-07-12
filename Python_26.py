def remove_duplicates(numbers_list):
    return list(set(numbers_list))

numbers_list = list(map(int, input("Enter numbers separated by a space: ").split()))
result = remove_duplicates(numbers_list)
print(result)