Here's the Python solution:

def kebab_to_camel(s):
    return ''.join(word.capitalize() for word in s.split('-')) if '-' in s else s