def remove_duplicates(numbers):
    return list(set(numbers))

def check(numbers):
    return remove_duplicates(numbers)

result = check([1, 2, 3, 2, 4, 3, 5])
print(result)