Here is the Python code to solve the problem:

def camel_case(s):
    return ''.join(word.capitalize() for word in s.split())

input_str = input()
print(camel_case(input_str))