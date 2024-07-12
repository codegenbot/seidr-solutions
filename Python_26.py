def remove_duplicates(numbers_list):
    return sorted(list(set(numbers_list)))

numbers_list = list(map(int, input().split()))
result = remove_duplicates(numbers_list)
print(result)