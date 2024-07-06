```
def filter_by_substring(input_string, target):
    result = [line for line in input_string.split('\n') if target in line]
    return '\n'.join(result)

def check(func):
    result = func(input_string, 'substring')
    print(result)

input_string = input("Enter a string: ")
check(filter_by_substring)