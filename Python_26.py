print("Enter space-separated numbers:")
numbers_list = list(map(int, input().split()))

def remove_duplicates(numbers_list):
    return sorted(list(set(numbers_list)))

result = remove_duplicates(numbers_list)
print(result)