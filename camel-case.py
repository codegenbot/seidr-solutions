```
def camel_case(s):
    return ''.join(word.capitalize() for i, word in enumerate(s.split('-')) if i != 0)