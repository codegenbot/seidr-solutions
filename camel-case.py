Here is the Python solution for the problem:

def kebab_to_camel(s):
    return ''.join(word.capitalize() if i > 0 else word.lower() for i, word in enumerate(s.split('-'))).replace('-', ' ').replace(' ', '')