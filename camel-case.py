Here is the Python code to solve the problem:

def camel_case(input_str):
    return ''.join(word.capitalize() for word in input_str.replace('-', ' ').split())

input_str = input()
print(camel_case(input_str))