Here is the Python code to solve the problem:

def camel_case(input_string):
    return ' '.join(word.capitalize() for word in input_string.split())