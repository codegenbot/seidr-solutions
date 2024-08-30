Here is the Python code for the problem:

def camel_case(s):
    return ''.join(word.capitalize() for word in s.split())

print(camel_case(input()))