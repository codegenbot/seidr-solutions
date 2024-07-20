def camel_case(s):
    return ''.join(word.capitalize() if i > 0 else word.replace('-', ' ').strip().capitalize() for i, word in enumerate(s.split()[0].split('-')))