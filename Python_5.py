def add_delimiter(numbers, delimiter):
    result = []
    for num in numbers:
        result.extend([num, delimiter])
    result.pop()
    return result

def check(numbers, delimiter):
    return add_delimiter(numbers, delimiter)

numbers = [1, 2, 3, 4]
delimiter = ","
output = check(numbers, delimiter)
print(output)