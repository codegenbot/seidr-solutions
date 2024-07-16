def check(numbers):
    return list(dict.fromkeys(numbers))

remove_duplicates = [1, 2, 3, 2, 4, 3, 5]
result = check(remove_duplicates)
print(result)