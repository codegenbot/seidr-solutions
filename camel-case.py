Here is the Python code to solve the camel-case problem:

def kebab_to_camel(s):
    return ''.join(word.capitalize() for word in s.split('-'))

s = input()
print(kebab_to_camel(s))