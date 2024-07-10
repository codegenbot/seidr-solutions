```
def camel_case(s):
    words = [word.capitalize() for word in s.split('-')]
    return ''.join(word for word in words[:-1]) + words[-1].capitalize()