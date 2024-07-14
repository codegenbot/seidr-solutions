Here is the Python solution:

def camel_case(s):
    return ''.join(word.capitalize() for word in s.split()) if ' ' in s else s.capitalize()

input_str = input()
print(camel_case(input_str))