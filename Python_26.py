def check(numbers):
    return list(set(numbers))

remove_duplicates = [1, 2, 3, 2, 4, 3, 5]
result = check(remove_duplicates)
assert result == [1, 2, 3, 4, 5]
print(result)