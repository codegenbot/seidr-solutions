def remove_duplicates(numbers):
    return list(dict.fromkeys(numbers))


numbers = list(map(int, input().split()))
result = remove_duplicates(numbers)
print(*result)