```
def camel_case(s):
    return ''.join(word.capitalize() for i,word in enumerate(s.replace('-', ' ').split()) if i > 0)