def remove_duplicates(numbers_list):
    return list(set(numbers_list))

numbers_list = list(map(int, input("Enter the numbers separated by spaces: ").strip().split()))
result = remove_duplicates(numbers_list)
print(result)