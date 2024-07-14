def camel_case(string):
    return ''.join(word.capitalize() if i > 0 else word for i, word in enumerate(string.split('-'))).replace('-', ' ').replace(' ', '')