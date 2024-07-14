Here is the Python solution for the given problem:

def camel_case(s):
    return ''.join(word.capitalize() if i > 0 else word for i, word in enumerate(s.replace('-', ' ').split()))

input_string = input()
print(camel_case(input_string))