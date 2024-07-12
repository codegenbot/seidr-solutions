def remove_duplicates(numbers_list):
    return list(set(numbers_list))

input_numbers = list(map(int, input().split()))
result = remove_duplicates(input_numbers)
print(result)