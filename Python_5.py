def add_delimiter(numbers, delimiter):
    return delimiter.join(str(num) for num in numbers)

def check():
    numbers = [1, 2, 3, 4]
    delimiter = ","
    output = add_delimiter(numbers, delimiter)
    return output

print(check())