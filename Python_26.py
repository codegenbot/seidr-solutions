def check(numbers):
    return [num for num in numbers if numbers.count(num) == 1]

remove_duplicates = [1, 2, 3, 2, 4, 3, 5]
result = check(remove_duplicates)
expected_output = [1, 4, 5]

print(result == expected_output)