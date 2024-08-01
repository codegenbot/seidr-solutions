Here is the Python code to solve the problem:

def kebab_to_camel(s):
    return ''.join(word.capitalize() for word in s.split('-'))

s = input()
print(kebab_to_camel(s))