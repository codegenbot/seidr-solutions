Here is the solution in Python:

def camel_case(input_string):
    return ''.join(word.capitalize() for word in input_string.replace("-", " ").split())