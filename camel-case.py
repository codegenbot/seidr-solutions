```
def camel_case(s):
    if '-' not in s:
        return s
    return s[0].upper() + "".join(word.capitalize() for word in s.split('-')[1:])