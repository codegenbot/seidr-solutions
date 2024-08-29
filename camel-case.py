Here is the solution:

def kebab_to_camel(s):
    return ''.join(word.capitalize() for word in s.split('-')) if ' ' not in s else s