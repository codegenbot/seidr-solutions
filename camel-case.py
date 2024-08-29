```
def camel_case(input_str):
    return ''.join(word.capitalize() for word in input_str.split('-')) if '-' in input_str else input_str.capitalize()

print(camel_case(input(input("Enter a string: "))))