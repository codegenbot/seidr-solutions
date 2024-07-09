def insert_delimeter(numbers, delimeter):
    result = []
    for num in numbers:
        result.extend([num, delimeter])
    result.pop()
    return result

numbers = [1, 2, 3, 4, 5]
delimeter = ","
output = insert_delimeter(numbers, delimeter)
print(output)