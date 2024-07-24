```
def camel_case(s):
    return ''.join(word.capitalize() if idx == 0 or s[idx-1] != '-' else word for idx, word in enumerate(s.split('-')))

print(camel_case(input()))