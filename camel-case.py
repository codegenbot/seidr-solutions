```
def camel_case(s):
    return ''.join(word.strip().capitalize() if i > 0 else word.lstrip(' -') for i, word in enumerate(s.replace('-', ' ').split()))