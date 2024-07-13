Here is the Python solution:

def camel_case(s):
    return ''.join(word.capitalize() for word in s.replace('-', ' ').split())

# Read input from user
s = input()

print(camel_case(s))