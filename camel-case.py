```
def camel_case(s):
    s = s.replace('-', ' ')
    return ''.join(word.capitalize() for word in s.split()) if ' ' in s else s.capitalize()