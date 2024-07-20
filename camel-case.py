```
def camel_case(s):
    return ''.join(word if i == 0 or not word else word.capitalize() for i, word in enumerate(s.replace('-', ' ').split()))