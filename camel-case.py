```
def camel_case(s):
    return s.replace('-', '').capitalize() + ''.join(word.capitalize() for word in s.replace('-', ' ').split()[1:])