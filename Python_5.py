def add_delimiter(numbers, delimiter):
    return delimiter.join(str(num) for num in numbers)

def check(values):
    return add_delimiter(values, ',')

# Call the function with appropriate arguments
numbers = [1, 2, 3, 4]
output = check(numbers)
print(output)