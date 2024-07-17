Here is the solution:

def camel_case(input_string):
    return ''.join(word.capitalize() for word in input_string.replace('-', ' ').split())

print(camel_case(input("Enter a string: ")))