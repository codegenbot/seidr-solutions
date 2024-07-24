Here is the Python solution for the problem:

def camel_case(s):
    return ''.join(word.capitalize() for word in s.split()) if ' ' in s else s.title()

print(camel_case(input()))