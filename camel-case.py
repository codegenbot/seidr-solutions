Here is the Python solution for the problem:

def kebab_to_camel(s):
    return ''.join(word.capitalize() for word in s.split('-')) if ' ' not in s else s

input_str = input()
print(kebab_to_camel(input_str))