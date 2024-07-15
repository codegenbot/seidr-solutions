def add_delimiter(numbers, delimiter):
    return delimiter.join(str(num) for num in numbers)

def check(s):
    numbers = [1, 2, 3, 4]
    delimiter = ","
    return add_delimiter(numbers, delimiter)

output = check("Test")
print(output)