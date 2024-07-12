def remove_duplicates(numbers_list):
    return list(set(numbers_list))

input_string = input()
numbers_list = list(map(int, input_string.strip().split()))
result = remove_duplicates(numbers_list)
print(result)