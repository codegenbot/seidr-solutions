```
def camel_case(s):
    return ''.join((word[0].upper() + word[1:].lower()) if i > 1 else word.title() for i, word in enumerate(map(''.join, s.replace('-', ' ').split()), 1))