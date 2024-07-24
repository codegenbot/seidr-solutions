def join_with_delimeter(numbers, delimeter):
    result = []
    for num in numbers:
        result.extend([num, delimeter])
    return result[:-1]


numbers = input("Enter numbers separated by space: ").split()
delimeter = input("Enter the delimiter: ")
print(join_with_delimeter(numbers, delimeter))