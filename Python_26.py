def check(numbers):
    return list(set(numbers))

remove_duplicates = [1, 2, 3, 2, 4, 3, 5]
result = check(remove_duplicates)
expected_output = [1, 4, 5]

print(result == expected_output)