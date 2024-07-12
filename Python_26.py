def remove_duplicates():
    numbers_list = list(map(int, input().split()))
    return list(set(numbers_list))

result = remove_duplicates()
print(result)