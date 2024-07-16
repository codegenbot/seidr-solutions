```
def camel_case(s):
    return ' '.join(''.join(word.capitalize() for word in part.split('-')) for part in s.split())