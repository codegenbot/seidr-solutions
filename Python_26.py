def remove_duplicates(numbers_list):
    return ' '.join(map(str, list(set(numbers_list))))

numbers_list = list(map(int, input().strip().split()))
result = remove_duplicates(numbers_list)
print(result)