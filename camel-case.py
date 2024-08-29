```
def camel_case(s):
    words = s.split('-')
    return ''.join(word.capitalize() for word in words)